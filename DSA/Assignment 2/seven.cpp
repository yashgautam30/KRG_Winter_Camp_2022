#include<bits/stdc++.h>
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

vector<int> commonElements(Node* head, Node* head2){
    vector<int> v;

    if(head==NULL || head2==NULL) return v;

    Node* temp=head;
    Node* temp2=head2;

    while(temp && temp2){
        if(temp->data==temp2->data){
            v.push_back(temp->data);
            temp=temp->next;
            temp2=temp2->next;
        }
        else if(temp->data>temp2->data){
            temp2=temp2->next;
        }
        else{
            temp=temp->next;
        }
    }

    return v;
}

vector<int> common(Node* head, Node* head2, Node* head3){
    vector<int> v;
    map<int,int> mp;

    Node* temp=head;
    while(temp!=NULL){
        mp[temp->data]++;
        temp=temp->next;
    }

    Node* temp2=head2;
    while(temp2!=NULL){
        mp[temp2->data]++;
        temp2=temp2->next;
    }

    Node* temp3=head3;
    while(temp3!=NULL){
        mp[temp3->data]++;
        temp3=temp3->next;
    }

    for(auto m: mp){
        if(m.second==3) v.push_back(m.first);
    }

    return v;
}

int main(){

    Node* head= new Node(1);
    head=insert(head, 6);
    head=insert(head, 9);
    head=insert(head, 12);
    head=insert(head, 15);
    
    Node* head2= new Node(1);
    head2=insert(head2, 9);
    head2=insert(head2, 11);
    head2=insert(head2, 12);
    head2=insert(head2, 18);

    Node* head3= new Node(1);
    head3=insert(head3, 9);
    head3=insert(head3, 12);
    head3=insert(head3, 19);
    head3=insert(head3, 20);

    cout<<"First: ";
    traverse(head);
    cout<<"Second: ";
    traverse(head2);
    cout<<"Third: ";
    traverse(head3);

    vector<int> v=common(head, head2, head3);

    cout<<"Common Elements: ";
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
}