package basic01;

public class CarTest {
	public static void main(String[] args) {
		Car car1 = new Car("14머 3029", "Red", 140);
		car1.speedUp();
		car1.showInfo();
		car1.speedUp();
		car1.showInfo();
		
		Car car2 = new Car("94허 3201", "Yellow", 120);
		car2.changeColor("Blue");
		car2.speedUp();
		car2.showInfo();
		System.out.println("총 " + car2.getCount() + "대 생성");
	}
}
