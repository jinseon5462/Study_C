package basic01;

public class CarFactoryTest {
    public static void main(String[] args){
        CarFactory[] car = new CarFactory[10];

        for(int i = 0; i < 10; i++){
            if(i % 2 == 0){
                car[i] = new CarFactory(i + 1, "Blue");
            }else{
                car[i] = new CarFactory(i + 1,"Red");
            }
        }
        // 출력
        for(int j = 0; j < 10; j++){
            car[j].showInfo();
        }

        /*
        // 2차원 배열
        CarFactory[][] car2 = new CarFactory[3][3];

        int n = 1;

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(i == 0){
                    car2[i][j] = new CarFactory(n++, "Red");
                }else if(i == 1){
                    car2[i][j] = new CarFactory(n++, "Yellow");
                }else{
                    car2[i][j] = new CarFactory(n++, "Blue");
                }
            }
        }
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                car2[i][j].showInformation();
            }
        }
         */
    }
}
