package periodicTasks;

import java.util.logging.Level;
import java.util.logging.Logger;

import javax.realtime.PeriodicParameters;
import javax.realtime.RealtimeThread;

import control.ControlSystem;

public class PeriodicSpeedWriter extends RealtimeThread{
	private ControlSystem controlSystem =null;
	private boolean stop;
	private static int interval = 10;
	
	public PeriodicSpeedWriter(PeriodicParameters pp, ControlSystem control) {
		super(null,pp);
		this.controlSystem = control;
	}
	
	@Override
	public void run() {
		while(!stop){
			waitForNextPeriod();
			Logger.getGlobal().log(Level.INFO, "Current speed: "+controlSystem.getSpeed());
			System.out.println("Current speed: "+controlSystem.getSpeed());
			
			for(int i=0; i<interval; i++){}
			interval *= 10;
		}
	}
	
	public void stopThread(){
		stop = true;
	}
	

}
