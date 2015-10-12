package interruptHandlers;

import javax.realtime.AsyncEventHandler;
import javax.realtime.RealtimeThread;

public class MissDeadlineHandler extends AsyncEventHandler {
	private RealtimeThread thread;
	
	@Override
	public void handleAsyncEvent() {
		super.handleAsyncEvent();
		System.err.println("Deadline miss");
		thread.schedulePeriodic();
	}

	public void setThread(RealtimeThread thread) {
		this.thread = thread;
	}

}
