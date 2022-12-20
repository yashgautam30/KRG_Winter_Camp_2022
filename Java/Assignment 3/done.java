// package Ass-2;
import java.util.*;
public class done {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str="done";

        while(true){

            String s=sc.nextLine();
            int n=s.length();
            
            if(s.equals(str)){
                System.out.println("Thanks for using our application!.\n");
                break;
            }

            char c1=s.charAt(0);
            char c2=s.charAt(n-1);

            if(Character.compare(c1, c2)==0){
                System.out.println("Equal characters!\n");
            }

            else System.out.println("Not Equal characters!\n");
        }
        sc.close();
    }
}