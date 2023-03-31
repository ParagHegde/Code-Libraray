#include<bits/stdc++.h>
using namespace std;

vector<int> bfsGraph(vector<int> graph[], int n){
    vector<int> bfs;
    int vis[n]= {0};
    queue<int> q;
    q.push(0);
    vis[0] = 1;

    while(!q.empty()){
        int val = q.front();
        q.pop();
        bfs.push_back(val);

        for(auto it: graph[val]){
            if(!vis[it]){
                q.push(it);
                vis[it]=1;
            }
        }
    }

    return bfs;

}


int main(){
    int n,m;
    cin>>n>>m;
    vector<int> graph[n];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> ans = bfsGraph(graph,n);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}