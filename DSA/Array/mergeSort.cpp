#include<iostream>
using namespace std;

void merge(int arr[],int l, int m, int r){
    int a=m-l+1;
    int b=r-m;
    int arr1[a];
    int arr2[b];
    for(int i=0;i<a;i++){
        arr1[i]=arr[l+i];
    }
    for(int j=0;j<b;j++){
        arr2[j]=arr[m+1+j];
    }
    int i=0,j=0,k=l;
    while(i<a && j<b){
        if(arr1[i]<=arr2[j]){
            arr[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr[k]=arr2[j];
            j++;
            k++;
        }
    }
    if(i==a){
        while(j<b){
            arr[k]=arr2[j];
            j++;
            k++;
        }
    }
    if(j==b){
        while(i<a){
            arr[k]=arr1[i];
            i++;
            k++;
        }
    }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main(){
    int arr[]={10,2,4,6,1,8,3,9,5};
    int n=8;
    mergeSort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}