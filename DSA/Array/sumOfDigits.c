#include<stdio.h>
int calc(int n){
    if(n==0) return 0;
    else return (n%10) + calc(n/10);
}
int main(){
    int n=857;
    printf("%d",calc(n));
}