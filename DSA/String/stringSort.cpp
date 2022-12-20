#include<iostream>
using namespace std;

string sort(string s, int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(s[i]>s[j]){
                char c=s[j];
                s[j]=s[i];
                s[i]=c;
            }
        }
    }
    return s;
}

int main(){
    string s1="eadbc";
    int n=0;
    while(s1[n]!='\0'){
        n++;
    }    
    cout<<sort(s1, n)<<endl;
    return 0;
}