package string_practice;

import java.util.Scanner;

public class StringEx04 {
	public static void main(String[] args) {
		/*
		String myId = "lee1594";
		String myPw = "12312322";
		
		Scanner sc = new Scanner(System.in);
		System.out.print("아이디를 입력하세요 : ");
		String inputId = sc.nextLine();
		System.out.print("비밀번호를 입력하세요 : ");
		String inputPw = sc.nextLine();
		
		if(myId.equals(inputId) && myPw.equals(inputPw)) {
			System.out.println("로그인 성공");
		}else {
			System.out.println("로그인 실패");
		}
		 */
		
		int count = 0;
		
		do {
			String myId = "lee1594";
			String myPw = "d329123";

			Scanner sc = new Scanner(System.in);
			System.out.print("아이디를 입력하세요 : ");
			String inputId = sc.nextLine();
			
			System.out.print("비밀번호를 입력하세요 : ");
			String inputPw = sc.nextLine();
			
			if(inputId.equals(myId) && inputPw.equals(myPw)) {
				System.out.println("로그인 성공!");
				break;
			}else {
				System.out.println("로그인 실패!");
			}
			count++;
		}while(count < 5);
		System.out.println("입력횟수 초과입니다...");
	}
}
