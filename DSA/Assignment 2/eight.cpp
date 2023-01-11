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

void traverse(Node* head){
    if(head==NULL) return;
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* deleteKNode(Node* head, int n) {
        if(head==NULL) return NULL;
        if(n==0) return head;
        Node* first=head;

        Node* check=head;
        int k=0;
        while(check!=NULL){
            k++;
            check=check->next;
        }

        if(k<n){
            cout<<"Invalid Value of K."<<endl;
            return NULL;
        }

        if(k==1 && n==1) return NULL;
        else if(k==n){
            return head->next;
        }

        for(int i=0;i<n;i++){
            if(first==NULL) return NULL;
            first=first->next;
        }

        Node* second=head;
        while(first!=NULL && (first->next)!= NULL){
            second=second->next;
            first=first->next;
        }

        if(second->next){
            Node* temp=second->next;
            second->next=temp->next;
            temp->next=NULL;
            delete temp;
        }
        
        return head;
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
    cout<<"Traversal Before: ";
    traverse(head);
    cout<<endl;

    int k=6;

    head=deleteKNode(head,k);
    cout<<"Traversal After: ";
    traverse(head);
}