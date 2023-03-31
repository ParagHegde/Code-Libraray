#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node * prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    Node (){}
};
typedef struct Node* NODE;

void insertAtFront(NODE &head, int data){
    NODE newnode = new Node (data);
    if(head == NULL){
        head = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insertAtEnd(NODE &head, int data){
    NODE newnode = new Node (data);
    if(head == NULL){
        head = newnode;
        return;
    }
    NODE cur =head;
    while(cur->next!=NULL){
        cur=cur->next;
    }
    cur->next = newnode;
    newnode->prev = cur;
}


void insertAtPosition(NODE &head, int data,int pos){
    NODE newnode = new Node (data);
    if(head == NULL){
        head = newnode;
        return;
    }
    if(pos == 1){
        insertAtFront(head,data);
        return;
    }
    NODE cur =head;
    int ct = 1;
    while(cur->next!=NULL && ct<pos-1){
        cur=cur->next;
        ct++;
    }
    if(cur->next==NULL){
        cur->next = newnode;
        newnode->prev=cur;
        newnode->next =NULL;
        return;
    }
    cur->next->prev = newnode;
    newnode->next = cur->next;
    cur->next = newnode;
    newnode->prev =cur;
}

void display(NODE head){
    NODE cur= head;
    while(cur!=NULL){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
    cout<<endl;
}

void deleteFront(NODE &head){
    if(head == NULL){
        cout<<"list is empty"<<endl;
        return;
    }
        NODE cur = head;
    head = head->next;
    head->prev=NULL;
    cout<<"deleted ->"<<cur->data<<endl;
    delete cur;
}


void deleteEnd(NODE &head){
    if(head == NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    NODE cur = head;
    while(cur->next!=NULL){
        cur= cur->next;
    }
    cur->prev->next =NULL;
    cout<<"deleted->"<<cur->data<<endl;
    delete cur;
}

void deleteAtPosition(NODE &head,int pos)
{
    if(head==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    if(pos==1){
        deleteFront(head);
        return;
    }
    NODE cur =head;
    int ct =1;
    while(cur->next!=NULL && ct<pos){
        cur=cur->next;
        ct++;
    }
    if(cur->next == NULL){
        deleteEnd(head);
        return;
    }

    cur->prev->next =cur->next;
    cur->next->prev =cur->prev;
    cout<<"deleted ->"<<cur->data<<endl;
    delete cur;
}



int main(){
    NODE head =NULL;
    insertAtFront(head,50);
    insertAtEnd(head,60);
    insertAtEnd(head,80);
    insertAtPosition(head,70,1);
    // deleteFront(head);
    // deleteEnd(head);
    // deleteAtPosition(head,1);
    deleteAtPosition(head,2);
    deleteAtPosition(head,3);
    display(head);
    return 0;
}