#include<iostream>
using namespace std;
void nextGreater(int arr[], int n){
    int a[n];
    for(int i=0;i<n-1;i++){
        bool flag=false;
        int temp=arr[i];
        for(int j=i;j<n;j++){
            if(temp<arr[j]){
                a[i]=arr[j];
                flag=true;
                break;
            }
        }
        if(!flag){
            a[i]=-1;
        }
    }
    a[n-1]=-1;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[]={2,4,6,1,8,3,9,5};
    int n=8;
    nextGreater(arr, n);
    return 0;
}