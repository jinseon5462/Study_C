package input_practice;

public class StringEx07 {
    public static void main(String[] args) {
        String s = "apple.jpg";
        int n = s.lastIndexOf('.');
        String x = s.substring(n + 1);
        System.out.println(x);
    }
}
