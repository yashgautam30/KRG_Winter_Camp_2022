#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void uni(int arr1[], int arr2[], int m, int n){

    sort(arr1,arr1+m);
    sort(arr2,arr2+n);

    int arrU[m+n];
    int i=0,j=0,k=0;

    while(i<m && j<n){

        if(arr1[i]<arr2[j]){
            arrU[k]=arr1[i];
            i++;
            k++;
        }

        else if(arr1[i]>arr2[j]){
            arrU[k]=arr2[j];
            j++;
            k++;
        }

        else{
            arrU[k]=arr1[i];
            i++;
            j++;
            k++;
        }
    }

    if(i==m){
        while(j<n){
            arrU[k]=arr2[j];
            j++;
            k++;
        }
    }

    else{
        while(i<m){
            arrU[k]=arr1[i];
            i++;
            k++;
        }
    }
    
    cout<<"UNION: ";
    print(arrU,k);
}

void inter(int arr1[], int arr2[], int m, int n){

    sort(arr1,arr1+m);
    sort(arr2,arr2+n);

    int arrI[min(m,n)];
    int i=0,j=0,k=0;

    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            i++;
        }

        else if(arr1[i]>arr2[j]){
            j++;
        }

        else{
            arrI[k]=arr1[i];
            i++;
            j++;
            k++;
        }
    }

    cout<<"INTERSECTION: ";
    print(arrI,k);
}

int main(){
    int arr1[]={1,5,4,3,2,6};
    int arr2[]={1,6,2,3,7};
    uni(arr1,arr2,6,5);
    inter(arr1,arr2,6,5);
    return 0;
}