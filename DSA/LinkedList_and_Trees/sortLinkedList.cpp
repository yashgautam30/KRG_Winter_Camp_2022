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

    Node* prev=NULL;

    while(temp!=NULL && num>temp->data){
        prev=temp;
        temp=temp->next;
    }

    if(prev!=NULL){
        t->next=prev->next;
        prev->next=t;
    }
    
    else{
        t->next=temp;
        head=t;
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
    cout<<endl;
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
    
    cout<<"Sorted Linked List: ";
    traverse(head);
    // head=sort(head);
    // cout<<"Traversal after: ";
    // traverse(head);
}