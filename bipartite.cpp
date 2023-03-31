#include<bits/stdc++.h>
using namespace std;

bool check(int V,vector<int>adj[],int color[],int source){
        queue<int> q;
        color[source]=0;
        q.push(source);
        while(!q.empty()){
            int node= q.front();
            q.pop();
            for(auto child: adj[node]){
                if(color[child]==-1){
                    color[child]=!color[node];
                    q.push(child);
                }
                else{
                    if(color[child]==color[node]){
                        return false;
                    }
                }
            }
        }
        return true;
    }

	bool isBipartite(int V, vector<int>adj[]){
	    int color[V];
	    for(int i=0;i<V;i++) color[i]=-1;
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	            if(check(V,adj,color,i)==false){
	                return false;
	            }
	        }
	    }
	    return true;
	}


int main(){
    int n,e;
    cin>>n>>e;
    vector<int> graph[n];
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y); 
        graph[y].push_back(x); 
    }
    cout<<isBipartite(n,graph);
    return 0;
}