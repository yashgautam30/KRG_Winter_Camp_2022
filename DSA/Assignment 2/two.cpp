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

Node* deleteAlter(Node* head){
    if(head==NULL) return NULL;

    Node* temp=head;

    while(temp && temp->next!=NULL){
        Node* temp2= temp->next;
        temp->next=temp2->next;
        free(temp2);
        temp=temp->next;
    }


    return head;
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
    
    cout<<"Linked List Before: ";
    traverse(head);
    cout<<endl;

    head=deleteAlter(head);

    cout<<"Linked List After deleting: ";
    traverse(head);
    cout<<endl;
}