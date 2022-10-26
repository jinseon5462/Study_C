package string_practice;

public class StringEx01 {
	public static void main(String[] args) {
		String str1 = "ABC DEFG";
		char c = str1.charAt(1);	// charAt(정수) 정수 인덱스의 값을 반환
		System.out.println(c);
		
		String str2 = "ABCDEFGHIJK";
		char c2 = str2.charAt(4);
		System.out.println(c2);
		
		String str3 = "한국어입니다.";
		char c3 = str3.charAt(3);
		System.out.println(c3);
	}
}
