import java.util.Scanner;

class minMax{
    int min;
    int max;
    int arr[];
    int n;

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

    void calculate(){
        min=arr[0];
        max=arr[0];

        for(int i=0;i<n;i++){
            if(arr[i]<min){
                min=arr[i];
            }
            if(arr[i]>max){
                max=arr[i];
            }
        }

    }

    void print(){
        System.out.println("\nMaximum Element in the array: "+max);
        System.out.println("Minimum Element in the array: "+min);
    }
}