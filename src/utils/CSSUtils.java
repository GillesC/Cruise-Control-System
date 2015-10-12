package utils;

import java.util.Random;

public class CSSUtils {
	
	public static double generateRandomDoubleBetweenInclusive(double rangeMin, double rangeMax) {
		Random r = new Random();
		return rangeMin + (rangeMax - rangeMin) * r.nextDouble();
	}

}
