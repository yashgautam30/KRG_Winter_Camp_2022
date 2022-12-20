package Library;

import java.util.Scanner;

public class book {
    String name;
    int sno;
    String author;

    Scanner sc=new Scanner(System.in);
    
    book(){
        System.out.println("Enter book no.: ");
        this.sno=sc.nextInt();
        sc.nextLine();

        System.out.println("Enter book name: ");
        this.name=sc.nextLine();

        System.out.println("Enter book author: ");
        this.name=sc.nextLine();
    }
}