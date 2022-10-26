package basic01;

public class CalcTest {
	public static void main(String[] args) {
		int resultAdd = Calculator.add(20, 30);
		int resultMin = Calculator.min(30, 20);
		int resultMultiple = Calculator.multiple(22, 32);
		double resultDivide = Calculator.divide(32, 21);
		
		System.out.println(resultAdd);
		System.out.println(resultMin);
		System.out.println(resultMultiple);
		System.out.printf("%.2f", resultDivide);
	}
}
