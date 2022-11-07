package book.sevice;

import java.util.ArrayList;

import book.vo.BookVO;

public interface IDBService {
	public void addBook(BookVO book);
    public BookVO getBook(String bookName);
    public ArrayList<BookVO> getBookList();
    public void updateBook(BookVO book);
    public void deleteBook(String bookCode);
}
