package string_practice;

public class MyListTest {
	public static void main(String[] args) {
		MyList list = new MyList();
		list.add("홍길동");
		list.add("임꺽정");
		list.add("심청이");
		list.add("점순이");
		list.add("콩순이");
		list.add("김두한");
		
		for(int i = 0; i < list.sArr.length; i++) {
			System.out.println(list.get(i));
		}
		System.out.println();
		
		for(int j = 0; j < list.size(); j++) {
			System.out.println(list.get(j));
		}
		System.out.println();
		
	}
}
