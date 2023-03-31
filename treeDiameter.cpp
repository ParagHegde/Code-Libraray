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


int height(NODE root , int &diameter){
    if(root==NULL){
        return 0;
    }
    int lhs = height(root->left,diameter);
    int rhs = height(root->right,diameter);
    diameter = max(diameter,lhs+rhs);
    return 1+max(lhs,rhs);
}



int main(){
    NODE root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    int diameter = 0;
    int heights = height(root,diameter);
    cout<<diameter<<endl; 
    return 0;
}