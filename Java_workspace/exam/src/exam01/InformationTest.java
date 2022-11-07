package exam01;

public class InformationTest {
	public static void main(String[] args) {
		Informations p1 = new Informations("이춘식", "010-2340-3458", "가족");
		Informations p2 = new Informations("홍길동", "010-5779-3458", "가족");
		Informations p3 = new Informations("김영희", "010-9857-3458", "가족");
		Informations p4 = new Informations("고말숙", "010-2595-5462", "친구");
		
		p1.setPhoneNumbeer("010-3870-5462");
		p1.showInfo();
        p2.showInfo();
        p3.showInfo();
        p4.showInfo();
	}
}
