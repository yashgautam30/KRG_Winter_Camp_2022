package Library;

import java.util.*;

public class books implements BooksInterface{
    Scanner sc=new Scanner(System.in);
    
    ArrayList<book> allbook= new ArrayList<book>(50); // creating arrayList of book type
    static int count=0; // to count the number of total books available in the library.

    public void addBook(book b){
        if(count>50){
            System.out.println("Sorry. Storage Full!");
            return;
        }
        boolean isavail=isAvailable(b);
        if(isavail){
            return;
        }
        else{
            allbook.add(b);
            count++;
        }
    }

    public void removeBook(book b){
        if(allbook.contains(b)){
            allbook.remove(b);
            count--;
        }
    }

    public void rentBook(book b){
        boolean isavail=isAvailable(b);
        if(isavail){
            allbook.remove(b);
            count--;
        }

        else System.out.println("Sorry, The requested book is not available!");
    }

    public void returnBook(book b){
        boolean isavail=isAvailable(b);

        if(isavail){
            return;
        }

        else{
            if(count<50){
                allbook.add(b);
                count++;
            }
            else System.out.println("Sorry, cannot add book. Storage memory full!!");
        }
    }

    public void showAll(){
        System.out.println("*********************Showing All Books*********************");
        for(int i=0;i<allbook.size();i++){
            System.out.println("Book no.: "+allbook.get(i).sno);
            System.out.println("Book name: "+allbook.get(i).name);
            System.out.println("Book author: "+allbook.get(i).author);
            System.out.println();
        }
    }

    public void search(){
        System.out.println("Enter sNo of book:");
        int n=sc.nextInt();
        sc.nextLine();
        
        boolean flag=false;

        for(int i=0;i<allbook.size();i++){
            if(allbook.get(i).sno==n){
                System.out.println("Book Found!!");
                System.out.println("Book no.: "+allbook.get(i).sno);
                System.out.println("Book name: "+allbook.get(i).name);
                System.out.println("Book author: "+allbook.get(i).author);
                flag=true;
                break;
            }
        }

        if(!flag){
            System.out.println("Book not Found!");
        }
    }

    public Boolean isAvailable(book b){
        boolean avail=allbook.contains(b);
        
        if(avail) return true;
        return false;
    }
}