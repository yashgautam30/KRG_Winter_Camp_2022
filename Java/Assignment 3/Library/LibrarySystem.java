package Library;

import java.util.*;

class LibrarySystem{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        
        books bs=new books();
        students s=new students();

        while(true){
            
            System.out.println("Choose option:\n1. Enter for adding student details.\n 2. Enter for removing student details.\n3. for adding book\n4. for removing a book\n5. for showing all books\n6. for showing all students.\n7. Exit");
            int choice=sc.nextInt();
            
            switch(choice){
                case 1:
                student s1=new student();
                s.addStudent(s1);
                break;
                
                case 2:
                student s2=new student();
                s.removeStudent(s2);
                break;
                
                case 3:
                book b=new book();
                bs.addBook(b);
                break;
                
                case 4:
                book b2=new book();
                bs.removeBook(b2);
                break;
                
                case 5:
                bs.showAll();
                break;
                
                case 6:
                s.showAllStuds();
                break;
                
                case 7:
                System.out.println("Thank you for using our application!");
                System.exit(0);
                break;
                
                default:
                System.out.println("Wrong choice! Enter Again!");
                break;
            }
        }
    }
}