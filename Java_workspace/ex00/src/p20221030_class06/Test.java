package p20221030_class06;

public class Test {
	public static void main(String[] args) {
		Passenger p1 = new Passenger("홍길동", 10000);
		Passenger p2 = new Passenger("이순신", 5000);
		
		Bus bus = new Bus("108번");
		
		p1.takeBus(bus);
		p2.takeBus(bus);
		
		p1.showInfo();
		p2.showInfo();
		p1.outBus(bus);
		bus.showInfo();
	}

}
