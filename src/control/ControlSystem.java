package control;

import java.util.ArrayList;
import javax.realtime.PeriodicParameters;
import javax.realtime.RelativeTime;

import periodicTasks.PeriodicSpeedThread;

public class ControlSystem {

	private double cssSpeed; 
	private Car car;
	private ArrayList<PeriodicSpeedThread> speedThreads = new ArrayList<PeriodicSpeedThread>();
	
	public ControlSystem(Car car) {
		this.car = car;
	}

	public void activate() {
		cssSpeed = getSpeed();
		// make periodic thread to adjust to cssSpeed 
		System.out.println("ACTIVATE ENABLED!");
		changeSpeed(cssSpeed);
		
	}


	public void deactivate() {
		for(PeriodicSpeedThread t: speedThreads){
			t.stopThread();
		}
		
	}

	public void accelerate(double desiredSpeed) {
		cssSpeed = desiredSpeed;
		changeSpeed(cssSpeed);
	}

	public void decelerate(double desiredSpeed) {
		cssSpeed = desiredSpeed;
		System.err.println("Disred speed is : "+desiredSpeed);
		changeSpeed(cssSpeed);
	}

	public void resume() {
		changeSpeed(cssSpeed);
		
	}
	
	public double getSpeed(){
		return car.getSpeed();
	}

	public void changeCarSpeed(double factor) {
		car.changeSpeed(factor);
		
	}

	public void incrementCarSpeed(double amount) {
		car.incrementSpeed(amount);
		
	}
	
	private void changeSpeed(double cssSpeed) {
		deactivate();// zorgen andere threads snelheid niet wijzigen
		PeriodicSpeedThread t = new PeriodicSpeedThread(new PeriodicParameters(new RelativeTime(500,0)), cssSpeed, this);
		speedThreads.add(t);
		t.start();
		
	}
	


	

}
