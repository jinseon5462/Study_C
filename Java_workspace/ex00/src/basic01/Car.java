package basic01;

public class Car {
	public String number;
	public String color;
	public int maxSpeed;
	static int count;
	
	public Car(String number, String color, int maxSpeed){
		this.number = number;
		this.color = color;
		this.maxSpeed = maxSpeed;
		count++;
	}
	
	public void speedUp() {
		this.maxSpeed += 10;
	}
	
	public void changeColor(String color) {
		this.color = color;
	}
	
	public void showInfo() {
		System.out.println("\n차 번호 : " + number + "\n색깔 : " + color + "\n최대 속도 : " + maxSpeed);
	}
	public int getCount() {
		return count;
	}
}
