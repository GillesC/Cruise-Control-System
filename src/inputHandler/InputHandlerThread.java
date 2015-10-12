package inputHandler;

import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

import control.Car;
import control.ControlSystem;
import sun.security.krb5.internal.crypto.crc32;

public class InputHandlerThread extends Thread{
	
	private static Scanner sc = new Scanner(System.in);
	private ControlSystem controlSystem = null;
	private Car car;
	
	public InputHandlerThread(ControlSystem controlSystem, Car car) {
		this.controlSystem = controlSystem;
		this.car = car;
	}

	public void run(){
		String command = null;
		while(!(command=sc.nextLine()).equals("BYE")){
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
		
	}

}
