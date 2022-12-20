#include<bits/stdc++.h>
using namespace std;

void countingSort(int arr[], int n, int a, int b){

    int m=b-a+1;
    int count[m];

    for(int i=0;i<m;i++){
        count[i]=0;
    }

    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    int j=0;
    for(int i=0;i<m;i++){
        int k=count[i];
        while(k>0){
            arr[j]=i;
            j++;
            k--;
        }
    }
}

int main(){
    int arr[]={5,7,2,6,8,1,9,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int a=0;
    int b=9;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    countingSort(arr, n, a, b);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}