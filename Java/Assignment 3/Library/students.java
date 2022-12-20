package Library;

import java.util.*;

public class students implements StudentsInterface{
    Scanner sc=new Scanner(System.in);

    ArrayList<student> allStuds= new ArrayList<student>(50);
    static int count=0;

    public void addStudent(student s){
        if(count>50){
            System.out.println("Sorry. Storage Full!");
            return;
        }
        boolean is=isStud(s);
        if(is){
            System.out.println("The student with this UID already exists.");
            return;
        }
        else{
            allStuds.add(s);
            count++;
        }
    }

    public void removeStudent(student s){
        if(allStuds.contains(s)){
            allStuds.remove(s);
            count--;
        }
    }

    public Boolean isStud(student s){
        boolean avail=allStuds.contains(s);
        
        if(avail) return true;
        return false;
    }

    public void showAllStuds(){
        System.out.println("*********************Showing All Student Details*********************");
        for(int i=0;i<allStuds.size();i++){
            System.out.println("Student UID.: "+allStuds.get(i).uid);
            System.out.println("Student name: "+allStuds.get(i).name);
            System.out.println();
        }
    }

    @Override
    public void rentSBook(books b) {
        // TODO Auto-generated method stub
        
        books bs=new books();
        bs.showAll();
        bs.rentBook(b);

        if(allStuds.get(count).bookC<3){
            System.out.println("Renting you the book: "+b.name);
            allStuds.get(count).bookC++;
            // allStuds.get(count).borrows[0]++;
            return;
        }
        else{
            System.out.println( "Student Can not Borrow more than 3 Books.");
            return;
        }
    }

    @Override
    public void returnSBook(books b) {
        System.out.println("Enter the UID of the student: ");
        int n=sc.nextInt();
        sc.nextLine();

        for(int i=0; i<allStuds.size();i++){
            if(allStuds.get(i).uid==n){
                allStuds.get(i).bookC--;
                books bs=new books();
                bs.addBook(b);
            }
        }        
    }

}