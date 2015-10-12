package interruptHandlers;

import javax.realtime.AsyncEventHandler;
import javax.realtime.RealtimeThread;

public class CostOverrunHandler extends AsyncEventHandler{
	private RealtimeThread thread;
	
	@Override
	public void handleAsyncEvent() {
		super.handleAsyncEvent();
		System.err.println("Cost overrun");
		thread.schedulePeriodic();
	}

	public void setThread(RealtimeThread thread) {
		this.thread = thread;
	}

}
