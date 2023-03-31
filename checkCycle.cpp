#include<bits/stdc++.h>
using namespace std;


  bool cycleCheck(int vis[],int src,vector<int> adj[]){
        vis[src]=1;
        queue<pair<int,int>> q;
        q.push({src,-1});
        
        while(!q.empty()){
            int parent = q.front().second;
            int child = q.front().first;
            q.pop();
            for(auto neighbour:adj[child]){
                if(!vis[neighbour]){
                    vis[neighbour]=1;
                    q.push({neighbour,child});
                }
                else if(neighbour!=parent){
                    return true;
                }
            }
        }
        
      return false;
  }


  
  bool dfs(int vis[],int node,vector<int> adj[], int par){
        
        vis[node]=1;
        
        for(auto child: adj[node]){
            if(!vis[child]){
                if( dfs(vis,child,adj,node)){
                    return true;
                }
            }
            else if(child!=par){
                return true;
            }
        }
        return false;
  }
  
    
    bool isCycle(int V, vector<int> adj[]) {
        int vis[V]={0};
        bool ans=false;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                ans|=cycleCheck(vis,i,adj);
                // ans|=dfs(vis,i,adj,-1);
            }
        }
        return ans;
        
    }


int main(){
    int n;
    int e;
    cin>>n>>e;
    vector<int> adj[n];
    for(int i=0;i<e;i++){
        int x;
        int y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bool ans = isCycle(n,adj);
    cout<<ans<<endl;
    return 0;
}