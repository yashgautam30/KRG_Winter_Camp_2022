#include<bits/stdc++.h>
using namespace std;
int count=0;

int binary(int arr[],int l, int h, int x){
    if(h>l) return -1;
    int m=l+(h-l)/2;
    if(arr[m]==x) return m;
    if(arr[m]>x) return binary(arr, l, m-1, x);
    else return binary(arr, m+1, h, x);
}

int countOcc(int arr[], int n, int x){
    int ind=binary(arr, 0, n-2, x);

    if(ind==-1) return 0;
    int count=1;

}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={1,5,2,4,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    print(arr,n);
    return 0;
}