import java.util.Scanner;

class minMax2{

    int min, min2=1000;
    int max, max2;
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

        for(int i=0;i<n;i++){
            if( arr[i]!=min && arr[i]<min2){
                min2=arr[i];
            }
            if(arr[i]!=max && arr[i]>max2){
                max2=arr[i];
            }
        }
        
    }

    void print(){
        System.out.println("2nd largest Element: "+max2);
        System.out.println("2nd smallest Element: "+min2);
    }
}