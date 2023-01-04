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

void traverseAlter(Node* head){
    if(head==NULL) return;
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next->next;
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
    
    cout<<"Alternate Traversal: ";
    traverseAlter(head);
}