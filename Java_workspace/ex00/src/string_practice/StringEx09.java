package string_practice;

public class StringEx09 {
	public static void main(String[] args) {
		String s1 = "+++++e+++eee+++++e+++e";
		int count = 0;
		
		for(int i = 0; i < s1.length(); i++) {
			if(s1.charAt(i) == 'e') {
				count++;
			}
		}
		System.out.println("e이 개수는 : " + count);
		System.out.println();
		
		for(int i = 0; i < s1.length(); i++) {
			if(s1.charAt(i) == 'e') {
				System.out.println(i);
			}
		}
	}
}
