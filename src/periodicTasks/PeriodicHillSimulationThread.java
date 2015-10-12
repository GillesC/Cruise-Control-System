package periodicTasks;

import java.util.logging.Level;
import java.util.logging.Logger;

import javax.realtime.PeriodicParameters;
import javax.realtime.RealtimeThread;

import control.ControlSystem;
import utils.CSSUtils;

public class PeriodicHillSimulationThread extends RealtimeThread {
	private ControlSystem controlSystem = null;
	private boolean stop = false;
	private static final double MIN_FACTOR = 0.975, MAX_FACTOR = 1.025;

	public PeriodicHillSimulationThread(PeriodicParameters pp, ControlSystem control) {
		super(null, pp);
		this.controlSystem = control;
	}

	@Override
	public void run() {
		while (waitForNextPeriod() || !stop) {
			double currentSpeed = controlSystem.getSpeed();
			controlSystem.changeCarSpeed(generateHillFactor(currentSpeed));
			Logger.getGlobal().log(Level.INFO, "Changed speed from: " + currentSpeed + " to: " + controlSystem.getSpeed());
			System.out.println("Changed speed from: " + currentSpeed + " to: " + controlSystem.getSpeed());
		}

	}


	public double generateHillFactor(double speed) {
		return CSSUtils.generateRandomDoubleBetweenInclusive(MIN_FACTOR,MAX_FACTOR);
	}


	public void stopThread(){
		stop = true;
	}

}
