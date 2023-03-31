#include<bits/stdc++.h>
using namespace std;

void ratInAMaze(int i,int j, vector<string> &ans, string path,vector<vector<int>> &visited, vector<vector<int>> &maze ,int n){
    if(i==n-1 && j==n-1){
        ans.push_back(path);
        return ;
    }

    if(i<n-1 && visited[i+1][j]==0 && maze[i+1][j]==1){
        path.push_back('D');
        visited[i+1][j] = 1;
        ratInAMaze(i+1,j,ans,path,visited,maze,n);
        visited[i+1][j] = 0;
        path.pop_back();
    }

     if(j>0 && visited[i][j-1]==0 && maze[i][j-1]==1){
        path.push_back('L');
        visited[i][j-1] = 1;
        ratInAMaze(i,j-1,ans,path,visited,maze,n);
        visited[i][j-1] = 0;
        path.pop_back();
    }

    if(j<n-1 && visited[i][j+1]==0 && maze[i][j+1]==1){
        path.push_back('R');
        visited[i][j+1] = 1;
        ratInAMaze(i,j+1,ans,path,visited,maze,n);
        visited[i][j+1] = 0;
        path.pop_back();
    }

   

    if(i>0 && visited[i-1][j]==0 && maze[i-1][j]==1){
        path.push_back('U');
        visited[i-1][j] = 1;
        ratInAMaze(i-1,j,ans,path,visited,maze,n);
        visited[i-1][j] = 0;
        path.pop_back();
    }

}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> maze;
    vector<vector<int>> visited ;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        maze.push_back(temp);
    }
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            temp.push_back(0);
        }
        visited.push_back(temp);
    }
    // for(auto i: maze){
    //     for(auto j: i){
    //         cout<<j<<"";
    //     }
    //     cout<<endl;
    // }
    vector<string> ans;
    string path;
    visited[0][0]=1;
    ratInAMaze(0,0,ans,path,visited,maze,n);
    for(auto it: ans){
        cout<<it;
        cout<<endl;
    }
    return 0;
}