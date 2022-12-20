import java.util.Scanner;

class InsertDelete{
    int arr[];
    int n;
    int k=0;

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

    void inser(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array element ");
        int m=sc.nextInt();
        arr[k]=m;
        k++;
        sc.close();
    }

    void delete(){


    }

}