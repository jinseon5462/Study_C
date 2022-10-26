package string_practice;

public class StringEx12 {
	public static void main(String[] args) {
		String s1 = "OOAABBCCDDEE";
		String a = s1.replace("BC", "XX");
		System.out.println(a);
		
		boolean b1 = s1.contains("AA");	// 일치하는값이 있으면 true
		System.out.println(b1);
		
		String s2 = "  AABB CCDD ";
		String b = s2.trim();	// 앞뒤 공백제거
		System.out.println(b);
		
		String s3 = "Aa Bc BB Dd";
		String c = s3.toUpperCase();	// 전부 대문자로 바꿔주는 메서드
		System.out.println(c);
		
		String s4 = "AABBCCDDEEFF";
		String d = s4.toLowerCase();	// 전부 소문자로 바꿔주는 메서드
		System.out.println(d);
		
		
	}
}
