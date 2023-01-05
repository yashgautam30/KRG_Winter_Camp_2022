#include<iostream>
using namespace std;

struct Node
{
    char data;
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
        cout<<temp->data<<"";
        temp=temp->next;
    }
    cout<<endl;
}

Node* reverse(Node* head){
    if(head==NULL) return NULL;

    Node* head2=new Node('a');
    head2->data=head->data;

    Node* temp=head->next;

    while(temp!=NULL){
        Node* temp2=new Node(temp->data);
        temp2->next=head2;
        head2=temp2;
        temp=temp->next;
    }
    return head2;
}

void check(Node* head, Node* head2){
    Node* temp=head;
    Node* temp2=head2;
    int flag=0;

    while(temp!=NULL && temp2!=NULL){
        if(temp->data!= temp2->data){
            flag=1;
            break;
        }
        temp=temp->next;
        temp2=temp2->next;
    }
    if(flag==0) cout<<"Palindrome String!"<<endl;
    else cout<<"Not a Palindrome String!"<<endl;
}

int main(){

    int n;
    cout<<"Enter length of string: ";
    cin>>n;

    cout<<"Enter string characters: "<<endl;
    char num;
    cin>>num;

    Node* head= new Node(num);

    for(int i=1;i<n;i++){
        cin>>num;
        head=insert(head, num);
    }
    
    Node* head2=reverse(head);
    traverse(head);
    traverse(head2);
    check(head,head2);
}