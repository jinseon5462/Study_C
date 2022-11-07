package basic01;

public class HumanTest {
	public static void main(String[] args) {
		Human h1 = new Human("이순신", "대한민국", 'M');
		h1.showInfo();
		System.out.println("인구 수 : " + h1.getCount());
		
		Human h2 = new Human("임꺽정", "대한민국", 'M');
		h2.showInfo();
		System.out.println(h2.getCount());
	}
}
