#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
bool visited[N]={false};
vector<int> graph[N];

bool dfs(int vertex,int par){
    bool isLoopExists = false;
    visited[vertex]= true;
    for(auto child: graph[vertex]){
        // cout<<"par:"<<vertex<<" child:"<<child<<endl;
        if(visited[child] && child==par) continue;
        if(visited[child]) return true;
        // cout<<"par:"<<vertex<<" child:"<<child<<endl;
        isLoopExists|= dfs(child,vertex);
    }
    return isLoopExists;
}



int main(){
    int vertex;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int ver1,ver2;
        cin>>ver1>>ver2;
        graph[ver1].push_back(ver2);
        graph[ver2].push_back(ver1);
    }
    bool loop = false;
    for(int i=0;i<n;i++){
        if(visited[i]==true) continue;
        if(dfs(i,-1)){
           loop =true;
        }
    }
    if(loop ){
         cout<<"Loop is there"<<endl;
        }
        else{
            cout<<"No loop"<<endl;
    }
    return 0;
}
