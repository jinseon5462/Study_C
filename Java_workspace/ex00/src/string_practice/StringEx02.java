package string_practice;

public class StringEx02 {
	public static void main(String[] args) {
		String s1 = "ABC DEFG";
		String s2 = "ABC DEFG";
		String s3 = "ABCDEFG";
		
		if(s1 == s2) {
			System.out.println("두 문자열은 같습니다.");
		}else {
			System.out.println("두 문자열은 다릅니다.");
		}
		
		if(s1.equals(s2)) {
			System.out.println("두 문자열은 같습니다.");
		}else {
			System.out.println("두 문자열은 다릅니다.");
		}
		
		System.out.println(s1.equals(s2));
		System.out.println(s1.equals(s3));
	}
}
