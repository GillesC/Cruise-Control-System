package control;

import javax.realtime.AsyncEventHandler;
import javax.realtime.PeriodicTimer;
import javax.realtime.RelativeTime;

public class TimeHandler extends AsyncEventHandler {
	
	private PeriodicTimer timer;
	private ControlSystem cSystem;

	@Override
	public void handleAsyncEvent() {
		super.handleAsyncEvent();
		System.err.println("Awake Timer went off");
		if(timer.stop()){
			System.out.println("Breaking!");
			cSystem.decelerate(0);
		}
	}
	
	public void setTimer(PeriodicTimer timer){
		this.timer = timer;
	}

	public void setCarSystem(ControlSystem cSystem) {
		this.cSystem = cSystem;
		
	}

}
