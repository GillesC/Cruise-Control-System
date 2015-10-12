package periodicTasks;

import javax.realtime.PeriodicParameters;
import javax.realtime.RealtimeThread;

import control.ControlSystem;
import utils.CSSUtils;

public class PeriodicResistanceSimulationThread extends RealtimeThread {
	private ControlSystem controlSystem = null;
	private boolean stop = false;
	private static final double MIN_FACTOR = 0.975, MAX_FACTOR = 0.995;

	public PeriodicResistanceSimulationThread(PeriodicParameters pp, ControlSystem control) {
		super(null, pp);
		this.controlSystem = control;
	}

	@Override
	public void run() {
		while (waitForNextPeriod() && !stop) {
			double currentSpeed = controlSystem.getSpeed();

			double airFactor = generateAirResistanceFactor(controlSystem.getSpeed());

			double rollFactor = generateRollingResistance(controlSystem.getSpeed());
			controlSystem.changeCarSpeed((airFactor + rollFactor) / 2);

			System.out.println("Changed speed from: " + currentSpeed + " to: " + controlSystem.getSpeed());
		}

	}

	/*
	 * Methode die een rol factor berekend > 1 die omgekeerd evenredig is met
	 * het kwadraat van de snelheid
	 */

	public double generateRollingResistance(double speed) {
		// double factor = generateRandomBetweenInclusive(10, 15) / 10;
		// return
		// ((speed*speed)/(ControlSystem.MAX_SPEED*controlSystem.MAX_SPEED))*factor;
		return CSSUtils.generateRandomDoubleBetweenInclusive(MIN_FACTOR, MAX_FACTOR);
	}

	/*
	 * Methode die een factor berekend > 1 die ook afhankelijk is van de
	 * snelheid
	 */
	public double generateAirResistanceFactor(double speed) {
		// double factor = generateRandomBetweenInclusive(10, 15) / 10;
		// return
		// ((ControlSystem.MAX_SPEED*controlSystem.MAX_SPEED)/(speed*speed))*factor;
		return CSSUtils.generateRandomDoubleBetweenInclusive(MIN_FACTOR, MAX_FACTOR);
	}
	
	public void stopThread(){
		stop = true;
	}

}
