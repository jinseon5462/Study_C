package basic01;

public class DeskLampTest {
	public static void main(String[] args) {
		DeskLamp myLamp = new DeskLamp(true);
		
		myLamp.turnOn();
		System.out.println(myLamp.getStatus());
		
		myLamp.turnOff();
		System.out.println(myLamp.getStatus());
	}

}
