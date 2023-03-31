#include<bits/stdc++.h>
using namespace std;

	void dfs(int node, int vis[], vector<int> adj[], stack<int> &st){
	    vis[node]=1;
	    for(auto child: adj[node]){
	        if(!vis[child]){
	            dfs(child,vis,adj,st);
	        }
	    }
	    st.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    int vis[V]={0};
	    stack<int> st;
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            dfs(i,vis,adj,st);
	        }
	    }
	    vector<int> ans;
	    while(!st.empty()){
	        int x = st.top();
	        st.pop();
	        ans.push_back(x);
	    }
	    return ans;
	}


int main(){
	int n,m;
	cin>>n>>m;
	vector<int> adj[n];
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
	}
	vector<int> ans = topoSort(n,adj);
	for(auto it:ans){
		cout<<it<<" ";
	}
	cout<<endl;
    return 0;
}