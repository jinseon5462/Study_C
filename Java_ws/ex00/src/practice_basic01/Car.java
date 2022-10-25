package practice_basic01;

public class Car {
    String carNumber;
    String color;
    int maxSpeed;
    int count;

    public Car(){}

    public Car(String carNumber, String color, int maxSpeed){
        this.carNumber = carNumber;
        this.color = color;
        this.maxSpeed = maxSpeed;
    }

    public void speedUp(){
        this.maxSpeed += 20;
    }

    public void changeColor(String color){
        this.color = color;
    }
    public void showMaxSpeed(){
        System.out.println(maxSpeed);
    }
    public void showInfo(){
        System.out.println("\n차 번호 : " + carNumber + "\n색깔 : " + color);
    }

    public int getCount(){
        return count;
    }
}
