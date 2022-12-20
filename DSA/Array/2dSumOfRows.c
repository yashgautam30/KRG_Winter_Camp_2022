#include<stdio.h>
void rowSum(int m, int n, int p[][n]){
    int sum=0;
    for(int i=0;i<m;i++){
        sum=0;
        for(int j=0;j<n;j++){
            sum+=*(*(p+i)+j);
        }
        printf("Sum of %d row: %d\n",(i+1),sum);
    }
    return;
}
int main(){
    int arr[3][3]={{1,2,7},{3,4,6},{9,5,8}};
    int m=sizeof(arr)/sizeof(arr[0]);
    int n=sizeof(arr[0])/sizeof(arr[0][0]);;
    rowSum(m,n,arr);
}