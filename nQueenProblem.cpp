#include<bits/stdc++.h>
using namespace std;


bool isSafe(int row,int col, vector<string> board,int n){
    int dupRow=row,dupCol=col;
    while(row>=0 && col>=0){
        if(board[row][col]=='Q') return false;
        row--;
        col--;
    }
    row = dupRow;
    col = dupCol;
    while(col>=0){
        if(board[row][col]=='Q') return false;
        col--;
    }
    row = dupRow;
    col = dupCol;
    while(row<n && col>=0){
        if(board[row][col]=='Q') return false;
        row++;
        col--;
    }
    return true;
}

void solveNqueens(int col, int n, vector<vector<string>> &ans, vector<string> &board){
    if(col==n){
        ans.push_back(board);
        return;
    }

    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            solveNqueens(col+1,n,ans,board);
            board[row][col]='_';
        }
    }
}


int main(){
    int n;
    cin>>n;
    vector<vector<string>> ans;
    vector<string> board;
    string s(n,'_');
    for(int i=0;i<n;i++){
        board.push_back(s);
    }
    solveNqueens(0,n,ans,board);
    if(ans.size()==0){
        cout<<n<<" queen problem has no solution"<<endl;
    }
    else{
        for(auto it: ans){
        for(auto jt: it){
            cout<<jt;
            cout<<endl;
        }
        cout<<endl;
    }
    }
    return 0;
}