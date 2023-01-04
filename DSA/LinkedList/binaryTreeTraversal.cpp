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

void preOrder(Node* head){
    if(head==NULL) return;

    cout<<head->data<<" ";
    preOrder(head->left);
    preOrder(head->right);
}

void inOrder(Node* head){
    if(head==NULL) return;

    inOrder(head->left);
    cout<<head->data<<" ";
    inOrder(head->right);
}

void postOrder(Node* head){
    if(head==NULL) return;

    postOrder(head->left);
    postOrder(head->right);
    cout<<head->data<<" ";
}

void levelTraversal(Node* head){
    queue<Node *> q;
    q.push(head);

    while(!q.empty()){
        cout<<q.front()->data<<" ";
        if(q.front()->left) q.push(q.front()->left);
        if(q.front()->right) q.push(q.front()->right);
        q.pop();
    }
}

void countLeafNodes(Node* head, int &count){
    if(head==NULL) return;

    if(head->left==NULL && head->right==NULL){
        count++;
        return;
    } 

    countLeafNodes(head->left, count);
    countLeafNodes(head->right, count);
}

void countNonLeafNodes(Node* head, int &count){
    if(head==NULL) return;

    if(head->left || head->right){
        count++;
    } 

    countNonLeafNodes(head->left, count);
    countNonLeafNodes(head->right, count);
}

int main(){

    Node* head= new Node(1);
    head->left=new Node(2);
    head->right=new Node(3);
    head->left->left=new Node(4);
    head->left->right=new Node(5);
    head->right->left=new Node(6);
    head->right->right=new Node(7);

    cout<<"Pre-Order: ";
    preOrder(head);
    cout<<endl;

    cout<<"In-Order: ";
    inOrder(head);
    cout<<endl;

    cout<<"Post-Order: ";
    postOrder(head);
    cout<<endl;

    cout<<"Level-Order: ";
    levelTraversal(head);
    cout<<endl;    

    int count=0;
    countLeafNodes(head, count);
    cout<<"Leaf Nodes: "<<count<<endl;

    int count2=0;
    countNonLeafNodes(head, count2);
    cout<<"Non-Leaf Nodes: "<<count2<<endl;

    

    return 0;
}