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
    cout<<endl;
}

Node* merge(Node* head, Node* head2){
    Node* merge=new Node(1);

    Node* temp=head;
    Node* temp2=head2;
    
    while(temp!=NULL && temp2!=NULL){
        if(temp->data < temp2->data){
            Node* c=new Node(temp->data);
            Node* t=merge->next;
            merge->next=c;
            c->next=t->next;
            delete t;
            temp=temp->next;
        }
        else if(temp->data > temp2->data){
            Node* c=new Node(temp2->data);
            Node* t=merge->next;
            merge->next=c;
            c->next=t->next;
            delete t;
            temp2=temp2->next;
        }
        else{
            Node* c=new Node(temp->data);
            Node* t=merge->next;
            merge->next=c;
            c->next=t->next;
            delete t;
            temp=temp->next;
            temp2=temp2->next;
        }
    }

    while(temp!=NULL){
        Node* c=new Node(temp->data);
                    Node* t=merge->next;
            merge->next=c;
            c->next=t->next;
            delete t;
        temp=temp->next;
    }

    while (temp2!=NULL)
    {
        Node* c=new Node(temp2->data);
                    Node* t=merge->next;
            merge->next=c;
            c->next=t->next;
            delete t;
        temp2=temp2->next;
    }
    return merge->next;
}

int main(){

    Node* head= new Node(1);
    head=insert(head, 6);
    head=insert(head, 8);
    head=insert(head, 12);
    head=insert(head, 15);
    
    Node* head2= new Node(3);
    head2=insert(head2, 9);
    head2=insert(head2, 11);
    head2=insert(head2, 14);
    head2=insert(head2, 16);
    head2=insert(head2, 18);
    head2=insert(head2, 20);

    cout<<"First: ";
    traverse(head);
    cout<<"Second: ";
    traverse(head2);

    // cout<<"Med";
    Node* merged=merge(head, head2);

    cout<<"Merged";
    traverse(merged);
}