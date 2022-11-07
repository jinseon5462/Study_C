package basic01;

public class CircleTest {
	public static void main(String[] args) {
		Circle[] circles = new Circle[3];
		
		for(int i = 0; i < circles.length; i++) {
			circles[i] = new Circle(i + 5);
			circles[i].getArea();
		}
		
		for(int i = 0; i < circles.length; i++) {
			circles[i] = new Circle(i + 5);
			circles[i].getArea();
		}
	}
}
