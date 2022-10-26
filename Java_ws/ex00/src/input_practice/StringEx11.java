package input_practice;

import java.util.Random;

public class StringEx11 {
    public static void main(String[] args) {
        String s1 = "철수는 ,영수는 ,쌤은 ";
        String s2 = "교실에서 #화장실에서# 식당에서";
        String s3 = "공부했다 @화장을했다@ 밥을먹었다.";

        Random rd = new Random();
        int rdNum1 = rd.nextInt(3);
        int rdNum2 = rd.nextInt(3);
        int rdNum3 = rd.nextInt(3);

        String[] str1 = s1.split(",");
        String[] str2 = s2.split("#");
        String[] str3 = s3.split("@");

        System.out.println(str1[rdNum1] + str2[rdNum2] + str3[rdNum3]);
    }
}
