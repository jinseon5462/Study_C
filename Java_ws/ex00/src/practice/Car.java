package practice;
public class Car {
    String number;
    String color;
    int maxSpeed;

    public Car(String number, String color){
        this.number = number;
        this.color = color;
    }

    public void speedUp(){
        maxSpeed += 10;
    }

    public void showInfo(){
        System.out.println("\n차 번호 : " + number + "\n색깔 : " + color + "\n최고속력 : " + maxSpeed);
    }

}
