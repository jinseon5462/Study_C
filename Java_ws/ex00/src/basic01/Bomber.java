package basic01;

public class Bomber {
    static int bomb = 10;
    char[][] map;

    public Bomber(char[][] map){
        this.map = map;
    }

    public boolean dropBomb(int x, int y){
        if(map[x][y] == 'O'){
            bomb -= 1;
            System.out.println("\n명중!!!");
            System.out.println("The end...");
            return true;
        }else {
            bomb -= 1;
            System.out.println("불발!!");
            return false;
        }
    }
    public void showInfo(){
        System.out.println("\n남은 폭탄의 갯수 : " + bomb);
    }
    /*
    public boolean dropBomb2(int x, int y){
        if(map[x][y] == 'O'){
            bomb -= 1;
            return true;
        }else{
            map[x - 1][y] = 'X';
            map[x][y] = 'X';
            map[x + 1][y] = 'X';

            map[x][y - 1] = 'X';
            map[x][y] = 'X';
            map[x][y + 1] = 'X';
            return false;
        }
    }
     */
}

