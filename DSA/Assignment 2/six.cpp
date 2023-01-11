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

    // if(head==NULL){
    //     // t->next=t;
    //     return t;
    // }

    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=t;
    t->next=head;

    return head;
}

void traverse(Node* head){
    if(head==NULL) return;
    Node* temp=head;
    cout<<temp->data<<" ";
    temp=temp->next;
    while(temp!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int countLL(Node* head){
    int count=1;
    Node* temp=head;
    
    if(temp->next==head) return 1;

    while(temp->next!=head){
        count++;
        temp=temp->next;
    }
    return count;
}

int main(){

    int n;
    cout<<"Enter no of Nodes: ";
    cin>>n;

    cout<<"Enter Elements:"<<endl;
    int num;
    cin>>num;

    Node* head= new Node(num);
    head->next=head;

    for(int i=1;i<n;i++){
        cin>>num;
        head=insert(head, num);
    }

    cout<<"Linked List: ";
    traverse(head);
    cout<<endl;

    int count=countLL(head);
    cout<<"Total Nodes: "<<count<<endl;
}