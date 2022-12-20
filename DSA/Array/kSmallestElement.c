#include<stdio.h>
void sort(int arr[],int n){
    // sorting algo
}
int main(){
    int arr[]={5,1,4,2,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    int k;
    scanf("%d",&k);
    printf("\nKth Smallest Element: %d",arr[n-k+1]);
}