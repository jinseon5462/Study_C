package basic01;

public class Calculator {
	public static int add(int n1, int n2) {
		int result = n1 + n2;
		return result;
	}
	
	public static int min(int n1, int n2) {
		int result = n1 + n2;
		return result;
	}
	
	public static int multiple(int n1, int n2) {
		int result = n1 * n2;
		return result;
	}
	
	public static double divide(double n1, double n2) {
		if(n1 == 0 || n2 == 0) {
			return 0;
		}else {
			double result = n1 / n2;
			return result;
		}
	}
}
