package inputHandler;

import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

import javax.realtime.AsynchronouslyInterruptedException;
import javax.realtime.PeriodicTimer;
import javax.realtime.RelativeTime;
import javax.realtime.Timed;

import control.ControlSystem;
import data.Car;
import sun.security.krb5.internal.crypto.crc32;

public class InputHandlerThread extends Thread{
	
	private static Scanner sc = new Scanner(System.in);
	private ControlSystem controlSystem = null;
	private Car car;
	private boolean stop = false;
	private PeriodicTimer timer;
	private AsynchronouslyInterruptedException aie;
	private Timed timed;
	
	public InputHandlerThread(ControlSystem controlSystem, Car car, AsynchronouslyInterruptedException aie) {
		this.controlSystem = controlSystem;
		this.car = car;
		this.aie = aie;
	}

	public void run(){
		String command = null;
		while(!(command=sc.nextLine()).equals("BYE") && !stop){
				System.out.println("CMD: "+command);
				activateCommands(command);
			}
		System.out.println("Closed InputHandlerThread");
		}

	private void activateCommands(String command) {
		Logger.getGlobal().log(Level.INFO, "Command: "+command);
		
		String[] args = command.split(" ");
		String cmd = args[0];
		
		if("activeer".equals(cmd)) controlSystem.activate();
		else if("deactiveer".equals(cmd)) controlSystem.deactivate();
		else if("versnel".equals(cmd)) controlSystem.accelerate(Double.parseDouble(args[1]));
		else if("vertraag".equals(cmd)) controlSystem.decelerate(Double.parseDouble(args[1]));
		else if("hervat".equals(cmd))  controlSystem.resume();
		
		
		else if("schakel".equals(cmd)) car.changeGear();
		else if("rem".equals(cmd)) car.brake();
		else if("gas".equals(cmd)) car.speedUp();
		
		else if("t".equals(cmd)) timer.reschedule(new RelativeTime(5000,0));
		else if("y".equals(cmd)) timed.resetTime(new RelativeTime(3000,0));
		
		else if("brake".equals(cmd) || "changeGear".equals(cmd) || "gasPedal".equals(cmd)) aie.fire();
		
	}
	
	public void stopThread(){
		stop = true;
	}

	public void setTimer(PeriodicTimer awakeTimer) {
		this.timer=awakeTimer;
		
	}

	public void setTimed(Timed awakeTimed) {
		this.timed = awakeTimed;
	}

}
