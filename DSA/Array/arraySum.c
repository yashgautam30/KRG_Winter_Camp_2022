#include<stdio.h>
int sumArray(int *p,int n){
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=*(p+i);
    }

    return sum;
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("%d",sumArray(arr,n));
    return 0;
}