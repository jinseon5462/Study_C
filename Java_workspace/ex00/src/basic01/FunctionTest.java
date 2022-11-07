package basic01;

public class FunctionTest {
	void f() {
		System.out.println("Hello\n");
	}
	static void f(char ch) {
		if(ch == 't') {
			System.out.println("Hello Java\n");
		}else {
			System.out.println("Good Bye Java\n");
		}
	}
	
	void f(int age) {
		if(age > 19) {
			System.out.println("성인전용사이트에 오신걸 환영합니다.");
		}else {
			System.out.println("미성년자는 출입금지라구");
		}
	}
	
	public static void main(String[] args) {
		FunctionTest ft = new FunctionTest();
		ft.f();
		f('t');
		f('f');
		
		FunctionTest f = new FunctionTest();
		f.f(23);
		f.f(19);
		
	}
}
