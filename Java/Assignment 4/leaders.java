import java.util.*;

class leaders{

    int arr[];
    int n;
    int min;

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
        
        sc.close();
    }

    void printLeaders()
    {
        int max_from_right =  arr[n-1];
        System.out.print(max_from_right + " ");
      
        for (int i = n-2; i >= 0; i--)
        {
            if (max_from_right < arr[i]){          
                max_from_right = arr[i];
                System.out.print(max_from_right + " ");
            }
        }   
    }

}