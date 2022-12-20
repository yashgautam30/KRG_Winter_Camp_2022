#include<iostream>
using namespace std;
int main(){
    string s1="hello";
    string s2="world";
    int i=0,j;
    while(s1[i]!='\0'){
        ++i;
    }
    j=0;
    while(s2[j]!='\0'){
        s1+=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    cout<<s1<<endl;
}