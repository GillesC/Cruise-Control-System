package control;
import javax.realtime.AsynchronouslyInterruptedException;
import javax.realtime.HighResolutionTime;
import javax.realtime.PeriodicParameters;
import javax.realtime.RelativeTime;

import data.Car;
import inputHandler.InputHandlerThread;
import interruptHandlers.CostOverrunHandler;
import interruptHandlers.MissDeadlineHandler;
import interruptHandlers.PeriodicResistanceInterruptible;
import periodicTasks.PeriodicHillSimulationThread;
import periodicTasks.PeriodicResistanceSimulationThread;
import periodicTasks.PeriodicSpeedWriter;

public class Main{
	private static final int SPEED_WRITER_MS = 1000;
	private static final int RESISTANCE_SIMULATION_MS = 1000, HILL_SIMULATION_MS = 1000;

	public static void main(String[] args) {
		Car car = new Car();
		
		ControlSystem cSystem = new ControlSystem(car);

		car.setControlSystem(cSystem);
		
		InputHandlerThread inputHandlerThread = new InputHandlerThread(cSystem, car);
		
		HighResolutionTime start = new RelativeTime(0,0);
		RelativeTime period = new RelativeTime(SPEED_WRITER_MS,0);
		RelativeTime cost = new RelativeTime(10,0);
		RelativeTime deadline = new RelativeTime(SPEED_WRITER_MS,0);
		
		
		CostOverrunHandler costOverrunHandler = new CostOverrunHandler();
		MissDeadlineHandler missDeadlineHandler = new MissDeadlineHandler();
	
		PeriodicSpeedWriter writer = new PeriodicSpeedWriter(new PeriodicParameters(start, period, cost, deadline, costOverrunHandler, missDeadlineHandler), cSystem);		
		
		AsynchronouslyInterruptedException aInterruptedException = new AsynchronouslyInterruptedException();
		
		PeriodicResistanceSimulationThread resistanceSimulationThread =	new PeriodicResistanceSimulationThread(new PeriodicParameters(new RelativeTime(RESISTANCE_SIMULATION_MS,0)), 
				cSystem, new PeriodicResistanceInterruptible(cSystem));

		PeriodicHillSimulationThread hillSimulationThread = new PeriodicHillSimulationThread(new PeriodicParameters(new RelativeTime(HILL_SIMULATION_MS,0)), cSystem);
		
		missDeadlineHandler.setThread(writer);
		costOverrunHandler.setTarget(resistanceSimulationThread.aInterruptedException);
		
		/*
		 * Feasibility test
		 */
		
		if(hillSimulationThread.getScheduler().isFeasible()) System.out.println("Feasible!");
		else System.out.println("NOT Feasible!");
		
		/*
		 * Starting Threads
		 */
		
		inputHandlerThread.start();
		resistanceSimulationThread.start();
		hillSimulationThread.start();
		writer.start();
		
	}

}
