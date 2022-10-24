package basic01;

public class Aaa {
    public static String f(String s){
        String result = s + " aaa";
        return result;
    }
    public static void main(String[] args){
        String s;
        s = f("aaa");
        System.out.println(s);
    }
}
