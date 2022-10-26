package basic01;

public class CarFactory {
	public int number;
	public String color;
	
	public CarFactory(int number, String color) {
		this.number = number;
		this.color = color;
	}
	
	public void showInfo() {
		System.out.println(number + "번의 색깔은 " + color + "입니다.");
	}
}
