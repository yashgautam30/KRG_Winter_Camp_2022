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

Node* removeDuplicates(Node* head){
    Node* temp=head;
    if(head==NULL) return head;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            Node* t=temp->next;
            temp->next=temp->next->next;
            delete t;
        }
        else temp=temp->next;
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
    
    cout<<"Traversal before: ";
    traverse(head);
    head=removeDuplicates(head);
    cout<<"Traversal after: ";
    traverse(head);
}