#include<iostream>
using namespace std;
int main(){
    // char name[100]="abcdefg";
    string name="abcdefg";
    int i=0;
    int count=0;
    while(true){
        if(name[i]=='\0'){
            break;
        }
        else{
            count++;
        }
        i++;
    }
    cout<<count<<endl;
    return 0;
}