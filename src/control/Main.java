package control;
import java.util.Timer;

import javax.realtime.AsynchronouslyInterruptedException;
import javax.realtime.HighResolutionTime;
import javax.realtime.Interruptible;
import javax.realtime.PeriodicParameters;
import javax.realtime.PeriodicTimer;
import javax.realtime.RelativeTime;
import javax.realtime.Timed;

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
		
		/*
		 * HANDLERS
		 */
	
		CostOverrunHandler costOverrunHandler = new CostOverrunHandler();
		MissDeadlineHandler missDeadlineHandler = new MissDeadlineHandler();
		TimeHandler timeHandler  = new TimeHandler();
		
		/*
		 * TIME
		 */
		
		HighResolutionTime start = new RelativeTime(0,0);
		RelativeTime period = new RelativeTime(SPEED_WRITER_MS,0);
		RelativeTime cost = new RelativeTime(10,0);
		RelativeTime deadline = new RelativeTime(SPEED_WRITER_MS,0);
		
		/*
		 * TIMER/TIMED
		 */
		PeriodicTimer awakeTimer = new PeriodicTimer(new RelativeTime(5000, 0), new RelativeTime(5000, 0), timeHandler);
		final Timed awakeTimed = new Timed(new RelativeTime(2000, 0));
		awakeTimed.doInterruptible(new Interruptible() {
			
			@Override
			public void run(AsynchronouslyInterruptedException exception) throws AsynchronouslyInterruptedException {
				System.out.println("TIMED");
				awakeTimed.resetTime(new RelativeTime(2000,0));
				
			}
			
			@Override
			public void interruptAction(AsynchronouslyInterruptedException exception) {
				// TODO Auto-generated method stub
				
			}
		});
		
		
		
		/*
		 * AEI
		 */
		AsynchronouslyInterruptedException aInterruptedException = new AsynchronouslyInterruptedException();
	
		/*
		 * THREADS
		 */
		PeriodicSpeedWriter writer = new PeriodicSpeedWriter(new PeriodicParameters(start, period, cost, deadline, costOverrunHandler, missDeadlineHandler), cSystem);		
		
		PeriodicResistanceSimulationThread resistanceSimulationThread =	new PeriodicResistanceSimulationThread(new PeriodicParameters(new RelativeTime(RESISTANCE_SIMULATION_MS,0)), 
				cSystem, new PeriodicResistanceInterruptible(cSystem));

		PeriodicHillSimulationThread hillSimulationThread = new PeriodicHillSimulationThread(new PeriodicParameters(new RelativeTime(HILL_SIMULATION_MS,0)), cSystem);
		
		/*
		 * SETTERS
		 */
		
		missDeadlineHandler.setThread(writer);
		costOverrunHandler.setTarget(resistanceSimulationThread.aInterruptedException);
		
		timeHandler.setTimer(awakeTimer);
		timeHandler.setCarSystem(cSystem);
		
		inputHandlerThread.setTimer(awakeTimer);
		
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
		awakeTimer.start();
		
	}

}
