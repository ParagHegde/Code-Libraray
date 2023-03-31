#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<int> adj[],int vis[],int pathVis[],int node){
        vis[node]=1;
        pathVis[node]=1;
        
        for(auto child: adj[node]){
            if(!vis[child]){
                if(dfs(adj,vis,pathVis,child)==true) return true;
            }
            else if(pathVis[child]==1){
                return true;
            }
        }
        pathVis[node]=0;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
         int vis[V]={0};
	    int pathVis[V]={0};
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            if(dfs(adj,vis,pathVis,i)==true) return true;
	        }
	    }
	    return false;
    }

int main(){
    int n;
    int e;
    cin>>n>>e;
    vector<int> adj[n];
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);       
    }
    bool ans = isCyclic(n,adj);
    cout<<ans<<endl;
    return 0;
}