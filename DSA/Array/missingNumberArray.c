#include<stdio.h>
int sum(int arr[], int n){
    int s=0;
    for(int i=0;i<n;i++){
        s^=arr[i];
    }
    return s;
}
int main(){
    int arr[5]={11,12,13,14,16};// array between range 11 to 16 with 1 missing element
    int n=sizeof(arr)/sizeof(arr[0]);
    int a=sum(arr,n);
    int b=0;
    for(int i=11;i<=11+n;i++){
        b^=i;
    }
    printf("%d",a^b);
    return 0;
}