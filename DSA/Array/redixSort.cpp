// incomplete
#include<bits/stdc++.h>
using namespace std;

int maxi(int arr[], int n){
    int m=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>m) m=arr[i];
    }
    return m;
}

void countingSort(int arr[], int n, int p){
    int m=10;
    int count[m];

    for(int i=0;i<m;i++){
        count[i]=0;
    }

    for(int i=0;i<n;i++){
        count[(arr[i]/p)%10]++;
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

void sort(int arr[], int n){
    
    int max=maxi(arr, n);

    for(int p=1; max/p>0; p*=10){
        countingSort(arr, n, p);
    }
}

int main(){
    int arr[]={6, 92, 47, 59, 31, 963, 29, 14, 78, 65};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    sort(arr, n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}