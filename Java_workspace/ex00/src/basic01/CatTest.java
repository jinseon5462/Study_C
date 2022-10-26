package basic01;

public class CatTest {
	public static void main(String[] args) {
		Cat c1 = new Cat();
		c1.setName("뗴껄룩");
		c1.setAge(23);
		System.out.println("이름 : " + c1.getName());
		System.out.println("나이 : " + c1.getAge());
		
		Cat c2 = new Cat();
		c2.setName("코코");
		c2.setAge(12);
		System.out.println("이름 : " + c2.getName());
		System.out.println("나이 : " + c2.getAge());
		
		Cat c3 = new Cat();
		c3.setName("쿠쿠");
		c3.setAge(5);
		System.out.println("이름 : " + c3.getName());
		System.out.println("나이 : " + c3.getAge());
		
		
	}
}
