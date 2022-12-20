#include<stdio.h>
int arraySum(int arr[][],int m, int n){
    int sum=0;
    for(int i=0;i<m;i++){
        int *p=arr[i];
        for(int j=0;j<n;j++){
            sum+=*(*(p+i)+j);
        }
    }
    return sum;
}
int main(){
    int arr[2][5]={{1,2,3,4,5},{6,7,8,9,10}};
    int m=2,n=5;
    printf("%d",arraySum(arr,m,n));
}