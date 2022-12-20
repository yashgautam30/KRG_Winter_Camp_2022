import java.util.*;

class rotateArray{

    int arr[];
    int n;
    int k;

    void input(){
        Scanner sc=new Scanner(System.in);

        try{
            System.out.println("Enter array size: ");
            n=sc.nextInt();
        }
        catch(Exception e){
            System.out.println("Enter valid size! ");
            System.exit(0);
        }

        arr=new int[n];

        try{
            System.out.println("\nEnter array elements: ");
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
        }
        catch(Exception e){
            System.out.println("Enter valid array elements.");
            System.exit(0);
        }

        System.out.println("\nEnter value of K: ");

        try{
            k=sc.nextInt();
        }
        catch(Exception e){
            System.out.println("Enter valid value of K");
            System.exit(0);
        }
        
        sc.close();
    }

    void rotate(){
        for(int x=0;x<k;x++){
            int temp=arr[n-1];
            for(int i=n-1;i>0;i--){
                arr[i]=arr[i-1];
            }
            arr[0]=temp;
        }
    }

    void print(){
        for(int i=0;i<n;i++) System.out.print(arr[i]+" ");
        System.out.println("\n");
    }

}