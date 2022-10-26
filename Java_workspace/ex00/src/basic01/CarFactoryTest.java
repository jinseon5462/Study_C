package basic01;

public class CarFactoryTest {
	public static void main(String[] args) {
		CarFactory[] car = new CarFactory[10];
		
		for(int i = 0; i < car.length; i++) {
			if(i % 2 == 0) {
				car[i] = new CarFactory(i + 1, "Red");
			}else {
				car[i] = new CarFactory(i + 1, "Blue");
			}
		}
		
		for(int j = 0; j < car.length; j++) {
			car[j].showInfo();
		}
	}
	
}
