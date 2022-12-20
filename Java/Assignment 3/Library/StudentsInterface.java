package Library;

interface StudentsInterface{
    public void addStudent(student s);
    public void removeStudent(student s);
    public void showAllStuds();
    public Boolean isStud(student s);
    public void rentSBook(books b);
    public void returnSBook(books b);
}