package basic01;

import java.util.Scanner;

public class BomberTest {
    public static void main(String[] args){

        int x, y;
        int count = 0;
        int targetX;
        int targetY;

        char[][] map = new char[5][5];

        // 좌표에 P대입
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                map[i][j] = 'P';
            }
        }

        // 좌표 입력받음
        Scanner sc = new Scanner(System.in);
        System.out.print("좌표 X : ");
        targetX = sc.nextInt();
        System.out.print("좌표 Y : ");
        targetY = sc.nextInt();

        // 입력받은 좌표값과 인덱스가 일치하는곳에 타겟 대입
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (i == targetX && j == targetY) {
                    map[i][j] = 'O';
                }
            }
        }

        do{
            System.out.println("\n-----폭격 좌표 입력-----");

            // 초기
            for(int i = 0; i < 5; i++){
                for(int j = 0; j < 5; j++){
                    System.out.printf("%3c", map[i][j]);
                }
                System.out.println();
            }

            Bomber b1 = new Bomber(map);

            System.out.print("\nInput Num >> ");
            x = sc.nextInt();
            System.out.print("Input Num >> ");
            y = sc.nextInt();

            boolean result = b1.dropBomb(x, y);
            // 입력값과 같은 인덱스에 X대입
            for(int i = 0; i < 5; i++){
                for(int j = 0; j < 5; j++){
                    if(i == x && j == y){
                        map[i][j] = 'X';
                    }
                }
            }
            if(result == true){
                break;
            }
            b1.showInfo();
            count++;
        }while(count < 10);
    }
}