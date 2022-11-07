package book.sevice;

import java.util.ArrayList;

import book.vo.BookVO;

public class DBService implements IDBService {
	ArrayList<BookVO> bookList = new ArrayList<BookVO>();

	@Override
	public void addBook(BookVO book) {
		bookList.add(book);
	}

	@Override
	public BookVO getBook(String bookName) {
		BookVO book = null;
		for(int i = 0; i < bookList.size(); i++) {
			if(bookList.get(i).getBookName().equals(book)) {
				book = bookList.get(i);
				break;
			}
		}
		return book;
	}

	@Override
	public ArrayList<BookVO> getBookList() {
		return bookList;
	}

	@Override
	public void updateBook(BookVO book) {
		for(int i = 0; i < bookList.size(); i++) {
			if(bookList.get(i).equals(book)) {
				bookList.set(i, book);
			}
		}
	}

	@Override
	public void deleteBook(String bookCode) {
		for(int i = 0; i < bookList.size(); i++) {
			if(bookList.get(i).getBookCode().equals(bookCode)) {
				bookList.remove(i);
			}
		}
	}
	
}
