package string_practice;

public class StringEx06 {
	public static void main(String[] args) {
		String s = "applebananapeach";
		String a = s.substring(3, 5);
		System.out.println(a);
		
		int x = s.indexOf('p');	// p의 인덱스중 가장 첫번째 인덱스
		System.out.println(x);
		
		int y = s.lastIndexOf('p');	// p의 인덱스중 가장 마지막 인덱스
		System.out.println(y);
	}
}
