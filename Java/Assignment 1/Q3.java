// package Assignment-2;

public class Q3 {
    static void func(){
        int s=0;
        int t=1;
        int i=0,j=0;
        while(i<10){
            s+=i;
            j=i;
            while(j>0){
                t=t*(j-i);
                j--;
            }
            s*=t;
            System.out.println("T is: "+t);
            i++;
        }
        System.out.println("S is: "+s);
    }
    public static void main(String[] args) {
        func();
    }
}
