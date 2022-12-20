#include<stdio.h>
void seperate(int arr[],int n){
    int a=0,b=0;
    for(int i=0;i<n,b<n;i++){
        if(arr[i]<0){
            int temp=arr[b];
            arr[b]=arr[a];
            arr[a]=temp;
            a++;
            b++;
        }
        else b++;
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={1,2,3,-1,-2,-3};
    int n=sizeof(arr)/sizeof(arr[0]);

    print(arr,n);
    seperate(arr,n);    
    print(arr,n);
    return 0;
}