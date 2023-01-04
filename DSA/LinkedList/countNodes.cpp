#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next=NULL;

    Node(int num){
        data=num;
    }
};

Node* insert(Node* head, int num){
    Node* temp=head;
    Node* t=new Node(num);

    if(head==NULL){
        return t;
    }

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=t;

    return head;
}

int count(Node* head){
    int c=0;
    Node* temp=head;

    while(temp!=NULL){
        c++;
        temp=temp->next;
    }

    return c;
}

void traverse(Node* head){
    if(head==NULL) return;
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){

    int n;
    cout<<"Enter no of Nodes: ";
    cin>>n;

    cout<<"Enter Elements:"<<endl;
    int num;
    cin>>num;

    Node* head= new Node(num);

    for(int i=1;i<n;i++){
        cin>>num;
        head=insert(head, num);
    }

    cout<<"Total Nodes: "<<count(head)<<endl;

    cout<<"Traversal: ";
    traverse(head);
}