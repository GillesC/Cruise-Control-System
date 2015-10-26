package periodicTasks;

import java.util.logging.Level;
import java.util.logging.Logger;

import javax.realtime.PeriodicParameters;
import javax.realtime.RealtimeThread;

import control.ControlSystem;

public class PeriodicSpeedThread extends RealtimeThread{
	private boolean stop = false;
	private double desiredSpeed =0;
	private ControlSystem controlSystem;
	private final double MAX_SPEED_CHANGE = 2.0; //km/u
	
	public PeriodicSpeedThread(PeriodicParameters pp, double cssSpeed, ControlSystem cs) {
		super(null, pp);
		this.desiredSpeed =  cssSpeed;
		controlSystem = cs;
		Logger.getGlobal().log(Level.INFO, "cssSpeed set at: " + cssSpeed);
		System.out.println("cssSpeed set at: " + cssSpeed);
	}
	
	
	
	@Override
	public void run() {
		while(!stop){
			waitForNextPeriod();
			double currentSpeed = controlSystem.getSpeed();
			double speedDiff = desiredSpeed - currentSpeed;
			//System.err.println("SPEED DIIF: "+speedDiff);
			if(Math.abs(speedDiff)<=MAX_SPEED_CHANGE) controlSystem.incrementCarSpeed(speedDiff);
			else{
				if(speedDiff<1e-6) controlSystem.incrementCarSpeed(-1*MAX_SPEED_CHANGE);
				else controlSystem.incrementCarSpeed(MAX_SPEED_CHANGE);
			}
		}
	}
	
	
	public void stopThread(){
		System.out.println("STOP THREAD "+ this.getClass().getName());
		Logger.getGlobal().log(Level.INFO, "STOP THREAD "+ this.getClass().getName());
		stop = true;
	}
}
