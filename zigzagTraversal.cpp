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


vector<vector<int>> bfs(NODE root){
    vector<vector<int>> ans;
    if(root==NULL){
        return ans;
    }
    bool leftToRight = true;
    queue<NODE> q;
    q.push(root);
    while(!q.empty()){
        vector<int> level;
        int n = q.size();
        for(int i=0;i<n;i++){
            NODE node = q.front();
            q.pop();
            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right !=NULL){
                q.push(node->right);
            }
            level.push_back(node->data);
        }
        if(leftToRight){
        ans.push_back(level);
        }else{
            reverse(level.begin(),level.end());
            ans.push_back(level);
        }
        leftToRight = !leftToRight;
    }
    return ans;

}




int main(){
    NODE root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    vector<vector<int>> ans = bfs(root);
    for(auto it: ans){
        for(auto jt:it){
            cout<<jt<<" ";
        }
        cout<<endl;
    }
    return 0;
}