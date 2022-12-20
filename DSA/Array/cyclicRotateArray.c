#include<stdio.h>

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void rotate(int *p, int n){
    int temp=*(p+n-1);
    for(int i=n-1;i>=1;i--){
        *(p+i)=*(p+i-1);
    }
    *(p)=temp;
}

int main(){
    int arr[]={1,2,3,4,5};
    int k=2;
    int n=sizeof(arr)/sizeof(arr[0]);

    print(arr,n);
    for(int i=0;i<k;i++) rotate(arr,n);
    print(arr,n);
}