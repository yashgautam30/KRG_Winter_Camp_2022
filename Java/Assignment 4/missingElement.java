import java.util.Scanner;

class missingElement{

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

    void missing(){
        int sum1=0;
        int sum2=0;
        for(int i=1;i<=n+1;i++) sum1^=i;
        for(int i=0;i<n;i++) sum2^=arr[i];
        System.out.println("Missing Element: "+(sum1^sum2));
    }

}