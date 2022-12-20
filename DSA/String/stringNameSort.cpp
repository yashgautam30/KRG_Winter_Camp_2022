#include<bits/stdc++.h>
using namespace std;

int strcmp(char *s1, char *s2){
    int i=0;
    while((*s1!='\0' && *s2!='\0') && *s1==*s2){
        s1++;
        s2++;
    }
    if(*s1==*s2){
        return 0;
    }
    else return *s1-*s2;
}

void swap(char c[], char d[]){
    char s[50];

    int i=0;
    while(c[i]!='\0'){
        s[i]=c[i];
        i++;
    }
    s[i]='\0';

    i=0;
    while(d[i]!='\0'){
        c[i]=d[i];
        i++;
    }
    c[i]='\0';

    i=0;
    while(s[i]!='\0'){
        d[i]=s[i];
        i++;
    }
    d[i]='\0';
}

void bubbleSort( int n,char s[][50]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(s[i], s[j])>0){
                swap(s[i], s[j]);
            }
        }
    }
}

int main(){
    char s[50][50]={"Dman","Singh","Chetan","Robert","Amal","Jakarta"};
    int n=6;
    bubbleSort(n,s);
    for(int i=0;i<n;i++) cout<<s[i]<<endl;
    return 0;
}