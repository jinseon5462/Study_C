package p20221031_inheritance01;

public class BallTest {
	public static void main(String[] args) {
		
		Ball[] balls = new Ball[10];
		int redCount = 0;
		int blueCount = 0;
		int greenCount = 0;
		
		// Ball타입 배열에 다른색깔의 볼 객체
		for(int i = 0; i < balls.length; i++) {
			int rdNum = (int)(Math.random() * 3 + 1);
			if(rdNum == 1) {
				balls[i] = new RedBall();
			}else if(rdNum == 2) {
				balls[i] = new BlueBall();
			}else if(rdNum == 3) {
				balls[i] = new GreenBall();
			}
		}
		
		for(int i = 0; i < balls.length; i++) {
			balls[i].showInfo();
		}
		
		// 생성된 인스턴스의 종류에따라 카운트
		for(int i = 0; i < balls.length; i++) {
			if(balls[i] instanceof RedBall) {
				redCount++;
			}else if(balls[i] instanceof BlueBall) {
				blueCount++;
			}else {
				greenCount++;
			}
		}
		System.out.println("빨간공 : " + redCount);
		System.out.println("파란공 : " + blueCount);
		System.out.println("녹색공 : " + greenCount);
		
	}
}