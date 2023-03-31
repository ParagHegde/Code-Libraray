#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    Node(){}
};
typedef class Node* node;

void insertAtHead(int data, node &head){
        node newnode = new Node(data);
    if(head == NULL){
        head = newnode;
        return;
    }
    newnode->next = head;
    head=newnode;
}

void insertAtEnd(int data,node &head){
    node newnode = new Node(data);
    if(head == NULL){
        head = newnode;
        return;
    }
    node cur = head;
    while(cur->next!=NULL){
        cur=cur->next;
    }
    cur->next = newnode;
}


void display(node head){
    node cur = head;
    while(cur!=NULL){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
    cout<<endl;
}


void insertAtPosition(int data, node &head, int pos){
    node newnode = new Node(data);
    if(head == NULL){
        head = newnode;
        return;
    }
    node prev = NULL;
    node cur = head;
    int ct = 1;
    if( pos == 1){
        insertAtHead(data,head);
        return ;
    }
    while(cur!=NULL && ct!=pos){
        prev = cur;
        cur = cur->next;
        ct++;
    }
    if(cur == NULL){
        insertAtEnd(data,head);
        return ;
    }
    prev ->next = newnode;
    newnode->next = cur;
}


void deleteFront(node &head){
    if(head == NULL){
        cout<<"list is empty"<<endl;
        return ;
    }
    int deleted = head->data;
    node cur = head;
    head = head ->next;
    delete cur;
    cout<<deleted<<endl;
}

void deleteEnd(node &head){
    if(head == NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    node cur = head;
    node prev = NULL;
    while(cur->next!= NULL){
        prev =cur;
        cur = cur->next;
    }
    prev ->next = NULL;
    int deleted =  cur->data;
    delete cur;
    cout<<deleted<<endl;
}


void deletePosition(int pos, node &head){
    if(head == NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    if(pos == 1){
        deleteFront(head);
        return ;
    }
    node cur= head;
    node prev =NULL;
    int ct =1;
    while(cur!= NULL && ct != pos){
        prev = cur;
        cur = cur->next;
        ct++;
    }

    if(cur == NULL){
        cout<<"invalid position"<<endl;
        return ;
    }

    int deleted = cur->data;
    prev->next = cur->next;
    delete cur;
    cout<<deleted<<endl;
}


int main(){
    node list= NULL;
    while(1){
        cout<<"press: \n 1 to insert front\n 2 to insert end\n 3 to insert at position\n 4 to delete front\n 5 to delete end\n 6 to delete at position\n 7 to display\n 8 to exit"<<endl;
        int ch;
        cin>>ch;
        switch(ch){
            case 1:{int data ;
            cin>>data;
            insertAtHead(data,list);}
            break;
            case 2: {int data;
            cin>>data;
            insertAtEnd(data,list);}
            break;
            case 3: {int data,pos;
            cin>>data>>pos;
            insertAtPosition(data,list,pos);}
            break;
            case 4: deleteFront(list);
            break;
            case 5:deleteEnd(list);
            break;
            case 6:{int pos;
            cin>>pos;
            deletePosition(pos,list);}
            break;
            case 7: display(list);
            break;
            case 8: exit(0);
            break;
            default: cout<<"invalid choice "<<endl;
            break;
        }
    }
    return 0;
}