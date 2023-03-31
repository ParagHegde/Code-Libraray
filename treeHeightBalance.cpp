#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data=val;
        left = NULL;
        right=NULL;
        // cout<<"Node created"<<endl;
    }
};
typedef class Node* NODE;


int TreeHeight(NODE root){
    if(root==NULL){
        return 0;
    }
    int left = TreeHeight(root->left);
    int right = TreeHeight(root->right);
    return 1+max(left,right);
}


int check(NODE root){
    if(root==NULL){
        return 0;
    }
    int left = TreeHeight(root->left);
    int right = TreeHeight(root->right);
    if(left==-1 || right == -1){
        return -1;
    }
    if(abs(left-right)>1){
        return -1;
    }
    return 1+max(left,right);
}


int main(){
    NODE root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    int height = TreeHeight(root);
    cout<<height<<endl;
    int flag = check(root);
    if(flag==-1){
        cout<<"Not balanced"<<endl;
    }
    else{
        cout<<"Balanced"<<endl;
    }
    return 0;
}