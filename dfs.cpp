#include<bits/stdc++.h>
using namespace std;

void dfsGraph(int node, vector<int> graph[], vector<int> &dfs, int vis[]){
        dfs.push_back(node);
        vis[node]=1;
        for(auto it: graph[node]){
            if(!vis[it]){
                dfsGraph(it,graph,dfs,vis);
            }
    }
}


int main(){
    int n,m;
    cin>>n>>m;
    vector<int> graph[n];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        graph[v].push_back(u);
        graph[u].push_back(v);
    }
    int start;
    cin>>start;
    vector<int> dfs;
    int vis[n] = {0};
    dfsGraph(start,graph,dfs,vis);
    for(auto it: dfs){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}