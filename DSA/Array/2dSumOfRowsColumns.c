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
void columnSum(int m, int n, int p[][n]){
    int sum=0;
    for(int i=0;i<m;i++){
        sum=0;
        for(int j=0;j<n;j++){
            sum+=*(*(p+j)+i);
        }
        printf("Sum of %d column: %d\n",(i+1),sum);
    }
    return;
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int m=3,n=3;
    rowSum(m,n,arr);
    printf("\n");
    columnSum(m,n,arr);
}