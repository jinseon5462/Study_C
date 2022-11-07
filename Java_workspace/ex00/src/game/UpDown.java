package game;

import java.util.Random;
import java.util.Scanner;

public class UpDown {
    public static void main(String[] args) {
    	Random rd = new Random();
    	Scanner sc = new Scanner(System.in);
    	int result;
        int inputNum;
        result = rd.nextInt(100) + 1;

        for(int i = 0; i < 10; i++){
            System.out.print("Input Num >> ");
            inputNum = sc.nextInt();
            if(result < inputNum){
                System.out.println("값이 더 작습니다.");
            }else if(result > inputNum){
                System.out.println("값이 더 큽니다.");
            }else{
                System.out.println("정답!!!");
                break;
            }
        }
    }
}
