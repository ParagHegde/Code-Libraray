#include<bits/stdc++.h>

using namespace std;


class Node {
    public:
    int data;
    Node * left;
    Node * right;
    Node(int data){
        this->data = data;
        this->left =NULL;
        this->right = NULL;
    }
    Node(){}
};
typedef class Node * NODE;

NODE insertIntoBst(int val,NODE root){
    NODE newNode = new Node(val);
    if(root==NULL){
        root=newNode;
        return root;
    }
    NODE cur = root;
    NODE par=NULL;
    while(cur!=NULL){
        par=cur;
        if(cur->data > val){
            cur=cur->left;
        }
        else{
            cur=cur->right;
        }
    }
    if(par->data<val){
        par->right = newNode;
    }
    else{
        par->left = newNode;
    }
    return root;
}

NODE findLastRight(NODE root){
    if(root->right==NULL){
        return root;
    }
    return findLastRight(root->right);
}

NODE helper(NODE root){
    if(root->left ==NULL){
        return root->right;
    }
    else if(root->right==NULL){
        return root->left;
    }
    else{
        NODE rightChild = root->right;
        NODE lastRight = findLastRight(root->left);
        lastRight->right = rightChild;
        return root->left;
    }
}


NODE deleteFromBst(NODE root,int key){
    if(root==NULL){
        return root;
    }
    if(root->data == key){
        return helper(root);
    }
    NODE cur =root;
    while(root){
        if(root->data > key){
            if( root->left!=NULL && root->left->data ==key){
                root->left = helper(root->left);
                break;
            }
            else{
                root=root->left;
            }
        }
        else{
            if(root->right !=NULL && root->right->data==key){
                root->right=helper(root->right);
                break;
            }
            else{
                root=root->right;
            }
        }
    }
    return cur;
}



void inOrder(NODE root){
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int main(){
    NODE root=NULL;
    root =insertIntoBst(10,root);
    root = insertIntoBst(20,root);
    root = insertIntoBst(30,root);
    root = insertIntoBst(3,root);
    root = insertIntoBst(5,root);
    root = insertIntoBst(2,root);
    root = deleteFromBst(root,20);
    inOrder(root);
    return 0;
}