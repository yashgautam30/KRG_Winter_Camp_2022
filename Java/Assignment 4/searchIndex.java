import java.util.*;

class searchIndex{

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

        System.out.println("\nEnter the element to be searched: ");
        
        try{
            k=sc.nextInt();
        }
        catch(Exception e){
            System.out.println("\nEnter valid element to be searched: ");
        }
        
        sc.close();
    }

    void calculate(){
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                System.out.print("\nElement "+k+" found at Index: "+i);
                System.out.println(i);
                break;
            }
        }   
    }

}