package interruptHandlers;

import javax.realtime.AsyncEventHandler;
import javax.realtime.AsynchronouslyInterruptedException;
import javax.realtime.Interruptible;
import javax.realtime.RealtimeThread;

import com.sun.media.sound.RealTimeSequencerProvider;

import periodicTasks.PeriodicResistanceSimulationThread;

public class CostOverrunHandler extends AsyncEventHandler{
	private AsynchronouslyInterruptedException aInterruptedException;
	
	public CostOverrunHandler(AsynchronouslyInterruptedException aInterruptedException) {
		this.aInterruptedException = aInterruptedException;
		
	}
	
	
	@Override
	public void handleAsyncEvent() {
		super.handleAsyncEvent();
		System.err.println("Cost overrun");
		aInterruptedException.fire();
	}

}
