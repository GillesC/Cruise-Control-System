package data;

import java.util.logging.Level;
import java.util.logging.Logger;

import control.ControlSystem;

public class Car {
	public static final double MAX_SPEED = 200;
	private double speed = 100.0;
	private ControlSystem controlSystem;
	
	
	public synchronized void incrementSpeed(double amount){
		System.out.println("Changed speed with amount "+amount);
		Logger.getGlobal().log(Level.INFO, "Changed speed with amount "+amount);
		speed +=amount;
	}
	
	public synchronized void changeSpeed(double factor){
		System.out.println("Changed speed with factor "+factor);
		Logger.getGlobal().log(Level.INFO, "Changed speed with factor "+factor);

		speed *=factor;
		//if(speed>MAX_SPEED) speed = MAX_SPEED;
	}
	
	public synchronized double getSpeed(){
		return speed;
	}

	public void changeGear() {
		controlSystem.deactivate();
		
	}

	public void brake() {
		controlSystem.deactivate();
		
	}

	public void speedUp() {
		controlSystem.deactivate();
		
	}

	public void setControlSystem(ControlSystem cSystem) {
		controlSystem = cSystem;
		
	}

}
