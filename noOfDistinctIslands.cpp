#include<bits/stdc++.h>
using namespace std;

void dfs(int row,int col,int Row,int Col, vector<vector<int>> &vis, vector<pair<int,int>> &ans, vector<vector<int>> &grid){
         int n = grid.size();
        int m = grid[0].size();
        vis[row][col]=1;
        ans.push_back({row-Row,col-Col});
        int drow[]={-1,0,1,0};
        int dcol[]={0,-1,0,1};
        for(int i=0;i<4;i++){
            int nrow = row+drow[i];
            int ncol = col+dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
                dfs(nrow,ncol,Row,Col,vis,ans,grid);
            }
        }
    }
  
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        set<vector<pair<int,int>>> s;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                vector<pair<int,int>> ans;
                 dfs(i,j,i,j,vis,ans,grid);   
                 s.insert(ans);
                }
            }
        }
        return s.size();
    }

    int main(){
        int n,m;
        vector<vector<int>> grid;
        for(int i=0;i<n;i++){
            vector<int> row;
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                row.push_back(x);
            }
            grid.push_back(row);
        }
        cout<<countDistinctIslands(grid);
        return 0;
    }