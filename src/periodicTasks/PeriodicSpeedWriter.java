package periodicTasks;

import java.util.logging.Level;
import java.util.logging.Logger;

import javax.realtime.PeriodicParameters;
import javax.realtime.RealtimeThread;

import control.ControlSystem;

public class PeriodicSpeedWriter extends RealtimeThread{
	private ControlSystem controlSystem =null;
	private boolean stop;
	
	public PeriodicSpeedWriter(PeriodicParameters pp, ControlSystem control) {
		super(null,pp);
		this.controlSystem = control;
	}
	
	@Override
	public void run() {
		while(waitForNextPeriod() && !stop){
			Logger.getGlobal().log(Level.INFO, "Current speed: "+controlSystem.getSpeed());
			System.out.println("Current speed: "+controlSystem.getSpeed());
			
			for(int i=0; i<10000000; i++){}
		}
	}
	
	public void stopThread(){
		stop = true;
	}
	

}
