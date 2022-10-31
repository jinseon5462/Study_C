package exam;

public class InformationTest {
    public static void main(String[] args){
        Informations person1 = new Informations("이순신", "010-4938-2342", "아빠");
        Informations person2 = new Informations("홍길동", "010-3870-2342", "엄마");
        Informations person3 = new Informations("김영희", "010-4324-4942", "고모");
        Informations person4 = new Informations("고말숙", "010-9867-8542", "사촌누나");

        person1.setPhoneNumber("010-2595-5462");
        person1.showInfo();
        person2.showInfo();
        person3.showInfo();
        person4.showInfo();

    }
}