package interruptHandlers;

import javax.realtime.AsyncEventHandler;
import javax.realtime.AsynchronouslyInterruptedException;
import javax.realtime.Interruptible;
import javax.realtime.RealtimeThread;

public class CostOverrunHandler extends AsyncEventHandler{
	private RealtimeThread thread;
	private AsynchronouslyInterruptedException aie;
	
	public CostOverrunHandler(AsynchronouslyInterruptedException aie) {
		this.aie = aie;
	}
	
	
	@Override
	public void handleAsyncEvent() {
		super.handleAsyncEvent();
		System.err.println("Cost overrun");
		thread.schedulePeriodic();
		//target.interrupt();
		aie.fire();
	}

	public void setThread(RealtimeThread thread) {
		this.thread = thread;
	}

}
