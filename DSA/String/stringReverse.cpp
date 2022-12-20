// using 2nd string
// #include<iostream>
// using namespace std;
// int main(){
//     string s1="hello";
//     string s2;
//     int i=0;
//     while(s1[i]!='\0'){
//         s2=s1[i]+s2;
//         i++;
//     }
//     cout<<s2<<endl;
//     return 0;
// }

// without using 2nd string
#include<iostream>
using namespace std;
int main(){
    string s1="hello";
    int i=0;
    while(s1[i]!='\0'){
        i++;
    }
    for(int j=0,k=i-1; j<k ; j++,k--){
        char c=s1[j];
        s1[j]=s1[k];
        s1[k]=c;
    }
    cout<<s1<<endl;
    return 0;
}