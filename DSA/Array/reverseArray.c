#include<stdio.h>

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

// void reverse(int arr[], int n){
//     for(int i=0,j=n-1;i<=j;i++,j--){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//     }
// }

void reverse(int *arr, int n){
    for(int i=0, j=n-1; i<=j; i++, j--){
        int temp=*(arr+i);
        *(arr+i)=*(arr+j);
        *(arr+j)=temp;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    reverse(arr,n);
    print(arr,n);
}