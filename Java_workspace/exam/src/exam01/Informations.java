package exam01;

public class Informations {
	String name;
	private String phoneNumber;
	String relationship;
	
	public Informations(String name, String phoneNumber, String relationship) {
		this.name = name;
		this.phoneNumber = phoneNumber;
		this.relationship = relationship;
	}

	public void setPhoneNumbeer(String phoneNumber) {
		this.phoneNumber = phoneNumber;
	}
	
	public void showInfo() {
		System.out.println("이름 : " + name + "\n전화번호 : " + phoneNumber + "\n관계 : " + relationship);
		System.out.println();
	}
}
