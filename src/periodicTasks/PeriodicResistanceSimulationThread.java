package periodicTasks;

import java.beans.IntrospectionException;

import javax.realtime.AsynchronouslyInterruptedException;
import javax.realtime.Interruptible;
import javax.realtime.PeriodicParameters;
import javax.realtime.RealtimeThread;

import org.omg.CORBA.PUBLIC_MEMBER;

import com.sun.org.apache.xml.internal.resolver.helpers.PublicId;

import control.ControlSystem;
import interruptHandlers.PeriodicResistanceInterruptible;
import utils.CSSUtils;

public class PeriodicResistanceSimulationThread extends RealtimeThread{
	private ControlSystem controlSystem = null;
	private boolean stop = false;
	private static final double MIN_FACTOR = 0.975, MAX_FACTOR = 0.995;
	
	public AsynchronouslyInterruptedException aie;
	
	private PeriodicResistanceInterruptible interruptible;
	
	public PeriodicResistanceSimulationThread(PeriodicParameters pp, ControlSystem control, PeriodicResistanceInterruptible interruptible, AsynchronouslyInterruptedException aie) {
		super(null, pp);
		this.controlSystem = control;
		this.interruptible = interruptible;
		this.aie = aie;
	}

	@Override
	public void run() {
		while (!stop) {
		waitForNextPeriod();
		aie.doInterruptible(interruptible);
		}
	}
	
	public void stopThread() {
		stop = true;
	}
	

}
