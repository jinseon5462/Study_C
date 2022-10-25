package practice_basic01;

public class CarTest {
    public static void main(String[] args){
        Car car1 = new Car();
        car1.carNumber = "24허 3244";
        car1.color = "Blue";
        car1.maxSpeed = 150;
        car1.speedUp();
        car1.showInfo();
        car1.showMaxSpeed();

        Car car2 = new Car("98머 9393", "Red", 160);
        car2.speedUp();
        car2.showInfo();
        car2.changeColor("Green");
        car2.speedUp();
        car2.showMaxSpeed();

        Car[] cars = new Car[5];

        for(int i = 0; i < 5; i++){
            cars[i] = new Car();
        }

    }
}
