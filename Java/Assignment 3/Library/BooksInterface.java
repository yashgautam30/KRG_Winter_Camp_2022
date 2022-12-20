package Library;

interface BooksInterface{
    public void addBook(book b);
    public void removeBook(book b);
    public void rentBook(book b);
    public void returnBook(book b);
    public void showAll();
    public void search();
    public Boolean isAvailable(book b);
}