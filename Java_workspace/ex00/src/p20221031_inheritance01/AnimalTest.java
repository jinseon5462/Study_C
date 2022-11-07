package p20221031_inheritance01;

public class AnimalTest {
	public static void main(String[] args) {
		Cat cat = new Cat();
		Dog dog = new Dog();
		Tiger tiger = new Tiger();
		
		System.out.println(cat instanceof Animal);	// Cat은 Animal을 상속받았기 때문에 true이다.
	}
}
