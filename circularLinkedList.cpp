#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
typedef class Node * NODE;

void display(NODE head){
    NODE cur =head;
    do{
        cout<<cur->data<<" ";
       cur=cur->next; 
    }while(cur!=head);
    cout<<endl;
}

void insertFront(NODE &head,int data){
    NODE newnode = new Node(data);
    if(head == NULL){
        head=newnode;
        newnode->next =newnode;
        return;
    }
    NODE cur = head;
    while(cur->next!=head){
        cur=cur->next;
    }
    cur->next=newnode;
    newnode->next = head;
    head=newnode;
}

void insertEnd(NODE &head,int data){
    NODE newnode = new Node(data);
    if(head == NULL){
        head=newnode;
        newnode->next =newnode;
        return;
    }
    NODE cur = head;
    while(cur->next!=head){
        cur=cur->next;
    }
    cur->next=newnode;
    newnode->next = head;
}

void insertAtPosition(NODE &head,int data,int pos){
    NODE newnode = new Node(data);
    if(head == NULL){
        head=newnode;
        newnode->next =newnode;
        return;
    }
    if(pos==1){
        insertFront(head,data);
        return;
    }
    NODE cur = head;
    int ct= 1;
    while(cur->next!=head && ct<pos-1){
        cur=cur->next;
        ct++;
    }
    if(cur->next == NULL){
        insertEnd(head,data);
        return;
    }
    NODE curNext = cur->next;
    cur->next=newnode;
    newnode->next = curNext;
}

void deleteFront(NODE &head){
    if(head==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    NODE cur =head;
    while(cur->next!=head){
        cur=cur->next;
    }
    NODE temp = head;
    cout<<"deleted ->"<<head->data<<endl;
    cur->next = head->next;
    head=head->next;
    delete temp;
}

void deleteEnd(NODE &head){
    if(head==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    NODE cur =head;
    while(cur->next->next!=head){
        cur=cur->next;
    }
    NODE temp = cur->next;
    cur->next = head;
    cout<<"deleted ->"<<temp->data<<endl;
    delete temp;
}



int main(){
    NODE head =NULL;
    insertFront(head,10);
    insertFront(head,20);
    insertEnd(head,30);
    insertAtPosition(head,5,1);
    insertAtPosition(head,15,2);
    deleteFront(head);
    deleteEnd(head);
    display(head);
    return 0;
}