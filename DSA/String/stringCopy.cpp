#include<iostream>
using namespace std;
int main(){
    string s1="hello";
    string s2;
    int i=0;
    while(s1[i]!='\0'){
        s2+=s1[i];
        i++;
    }
    cout<<s2<<endl;
    return 0;
}