package basic01;

public class Cat {
	private String name;
	private int age;
	
	public Cat() {}
	
	public Cat(String name, int age) {
		this.name = name;
		this.age = age;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	public String getName() {
		return name;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public int getAge() {
		return age;
	}
	public void showInfo() {
		System.out.println("\n이름 : " + name + "\n나이 : " + age);
	}
}
