#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left=NULL;
    Node* right=NULL;

    Node(int num){
        data=num;
    }
};

vector<int> v;

void inOrder(Node* head){
    if(head==NULL) return;

    inOrder(head->left);
    v.push_back(head->data);
    inOrder(head->right);
}

Node* insert(Node* root, int value){
    Node* temp=new Node(value);

    if(!root){
        return temp;
    }

    if(value>root->data){
        root->right=insert(root->right, value);
    }

    else if(value<root->data){
        root->left=insert(root->left, value);
    }

    return root;
}

int main(){

    Node* root=new Node(100);
    root=insert(root, 30);
    root=insert(root, 50);
    root=insert(root, 15);
    root=insert(root, 20);
    root=insert(root, 10);
    root=insert(root, 40);
    root=insert(root, 60);

    inOrder(root);

    int m=v.size();
    int arr1[m];

    for(int i=0; i<m; i++){
        arr1[i]=v[i];
    }
    cout<<"Inorder of 1st tree: ";
    for(int i=0; i<m; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    v.clear();


    Node* root2=new Node(-100);
    root2=insert(root2, 130);
    root2=insert(root2, -50);
    root2=insert(root2, 105);
    root2=insert(root2, -20);
    root2=insert(root2, 170);
    
    inOrder(root2);

    int n=v.size();
    int arr2[n];

    for(int i=0; i<n; i++){
        arr2[i]=v[i];
    }
    cout<<"Inorder of 2nd tree:";
    for(int i=0; i<n; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    v.clear();

    int arr3[m+n];

    int i=0, j=0, k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else if(arr1[i]>arr2[j]){
            arr3[k]=arr2[j];
            k++;
            j++;
        }
        else{
            arr3[k]=arr1[i];
            i++;
            j++;
            k++;
        }
    }

    while(i<m){
        arr3[k]=arr1[i];
        i++;
        k++;
    }

    while(j<n){
        arr3[k]=arr2[j];
        j++;
        k++;
    }

    cout<<"Inorder of Merged BST:";
    for(int i=0; i<m+n; i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    return 0;
}