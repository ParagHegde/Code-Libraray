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


vector<int> preOrder(NODE root){
    vector<int> pre;
    if(root==NULL){
        return pre;
    }
    stack<NODE> s;
    s.push(root);
    while(!s.empty()){
        root = s.top();
        s.pop();
        if(root->right != NULL){
            s.push(root->right);
        }
        if(root->left != NULL){
            s.push(root->left);
        }
        pre.push_back(root->data);
    }
    return pre;
}


vector<int> inOrder(NODE root){
    stack<NODE> s;
    NODE temp = root;
    vector<int> inorder;
    while(true){
        if(temp!=NULL){
            s.push(temp);
            temp = temp->left;
        }
        else{
            if(s.empty()){
                break;
            }
            else{
                temp=s.top();
                s.pop();
                inorder.push_back(temp->data);
                temp=temp->right;
            }
        }
    }
    return inorder;
}


vector<int> postOrder (NODE root){
    vector<int> ans;
    if(root==NULL )return ans;
    stack<NODE> st1,st2;
    st1.push(root);
    while(!st1.empty()){
        root = st1.top();
        st1.pop();
        st2.push(root);
        if(root->left!=NULL){
            st1.push(root->left);
        }
        if(root->right!=NULL){
            st1.push(root->right);
        }
    }
    while(!st2.empty()){
        ans.push_back(st2.top()->data);
        st2.pop();
    }
    return ans;
}


int main(){
    NODE root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->left->right->left = new Node(5);
    root->left->right->right = new Node(6);
    vector<int> ans = postOrder(root);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}