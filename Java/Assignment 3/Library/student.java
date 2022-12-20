package Library;

import java.util.Scanner;

public class student {
    int uid;
    String name;

    book borrows[]=new book[5];
    public int bookC=0; // to count the number of books borrowed by the student.

    Scanner sc=new Scanner(System.in);

    student(){
        System.out.println("Enter student UID: ");
        this.uid=sc.nextInt();
        sc.nextLine();

        System.out.println("Enter student name: ");
        this.name=sc.nextLine();
    }
}