package book.main;

import java.util.ArrayList;
import java.util.Scanner;

import book.vo.BookVO;

public class BookManagementTest {
	
	static ArrayList<BookVO> bookList = new ArrayList<BookVO>();
	
	public static BookVO searchBooks(String bookInfo) {
		BookVO result = null;
		for(int i = 0; i < bookList.size(); i++) {
			String name = bookList.get(i).getBookName();
			String author = bookList.get(i).getBookName();
			String publisher = bookList.get(i).getBookName();
			
			if(name.contains(bookInfo) || author.contains(bookInfo) || publisher.contains(bookInfo)) {
				result = bookList.get(i);
			}
		}
		return result;
	}
	
	public static void main(String[] args) {
		
		BookVO b1 = new BookVO("B001", "PowerJava", "천인국", "인피니티북스", 35000);
		BookVO b2 = new BookVO("B002", "혼자공부하는 SQL", "우재남", "한빛미디어", 24000);
		BookVO b3 = new BookVO("B003", "모던 자바스크립트", "이웅모", "위키북스", 45000);
		
		bookList.add(b1);
		bookList.add(b2);
		bookList.add(b3);
		BookVO result = searchBooks("java");
		System.out.println(result);
		/*
		Scanner sc = new Scanner(System.in);
		int select;
		String inBookName;
		String inAuthor;
		String inPublisher;
		
		System.out.println("==========도서정보 조회==========");
		System.out.print("1. 도서명 검색\t2. 저자 검색\t3. 출판사 검색");
		System.out.print("Select : ");
		select = sc.nextInt();
		sc.nextLine();
		
		boolean tf = true;
		
		while(tf) {
			if(select == 1) {
				System.out.println("도서명 검색을 선택하셨습니다.");
				System.out.print("도서명 : ");
				inBookName = sc.nextLine();
			}else if(select == 2) {
				System.out.println("저자 검색을 선택하셨습니다.");
				System.out.println();
			}
		}
		
		 */
		
		/*
		switch(select) {
			case 1 : System.out.println("도서명 검색을 선택하셨습니다.");
					 System.out.print("도서명 : ");
					 inBookName = sc.nextLine();
					 break;
			case 2 : System.out.println("저자 검색을 선택하셨습니다.");
					 System.out.print("저자 : ");
					 inAuthor = sc.nextLine();
					 break;
			case 3 : System.out.println("출판사 검색을 선택하셨습니다.");
					 System.out.print("출판사 : ");
					 inPublisher = sc.nextLine();
					 break;
			default : System.out.println("잘못 선택하셨습니다 다시 입력해주세요");
		}
		 */
		
	}
}