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

void segregate(Node** head){
    Node* evenStart=NULL;
    Node* evenEnd=NULL;
    Node* oddStart=NULL;
    Node* oddEnd=NULL;
    Node* temp=*head;
    
    while(temp!=NULL){
        if(temp->data%2==0){
            if(evenStart==NULL){
                evenStart=temp;
                evenEnd=evenStart;
            }
            else{
                evenEnd->next=temp;
                evenEnd=evenEnd->next;
            }
        }
        else{
            if(oddStart==NULL){
                oddStart=temp;
                oddEnd=oddStart;
            }
            else{
                oddEnd->next=temp;
                oddEnd=oddEnd->next;
            }
        }
        temp=temp->next;
    }

    if(evenStart==NULL || oddStart==NULL) return;

    evenEnd->next=oddStart;
    oddEnd->next=NULL;

    *head=evenStart;
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
    cout<<"Traversal Before: ";
    traverse(head);
    cout<<endl;

    segregate(&head);

    cout<<"Traversal After: ";
    traverse(head);
}