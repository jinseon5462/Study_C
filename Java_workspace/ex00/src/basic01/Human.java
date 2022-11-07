package basic01;

public class Human{
	String name;
	String nationality;
	char gender;
	static int count;
	
	public Human(String name, String nationality, char gender) {
		this.name = name;
		this.nationality = nationality;
		this.gender = gender;
		count++;	// 생성된 사람의수 카운트
	}
	
	public void showInfo() {
		System.out.println("이름 : " + name);
		System.out.println("국적 : " + nationality);
		System.out.println("성별 : " + gender);
		System.out.println();
	}
	
	public int getCount() {
		return count;
	}
}