import java.util.Scanner;

class subString {
    static void Str(String s, int a, int b){
        System.out.println(s.substring(a,b));
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        int a=sc.nextInt();
        int b=sc.nextInt();
        Str(s, a, b);
        sc.close();
    }
}