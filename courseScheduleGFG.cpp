#include<bits/stdc++.h>
using namespace std;

vector<int> findOrder(int N, int m, vector<vector<int>> prerequisites) 
    {
        vector<int> adj[N];
	    for(auto it:prerequisites){
	        adj[it[1]].push_back(it[0]);
	    }
	    
	    int indegree[N]={0};
	    for(int i=0;i<N;i++){
	        for(auto it: adj[i]){
	            indegree[it]++;
	        }
	    }
	    
	    queue<int> q;
	    vector<int> topo;
	    
	    for(int i=0;i<N;i++){
	        if(indegree[i]==0) q.push(i);
	    }
	    
	    while(!q.empty()){
	        int node= q.front();
	        q.pop();
	        topo.push_back(node);
	        
	        for(auto child:adj[node]){
	            indegree[child]--;
	            if(indegree[child]==0){
	                q.push(child);
	            }
	        }
	    }
	    
	    if(topo.size()==N) return topo;
	    return {};
    }


int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> prerequisites;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        prerequisites.push_back({x,y});
    }
    vector<int> adj[n];
    for(auto pre:prerequisites){
        adj[pre[1]].push_back(pre[0]);
    }

    vector<int> ans = findOrder(n,m,prerequisites);
    if(ans.size()==0){
        cout<<"no order possible"<<endl;
    }
    else{
        for(auto it: ans){
            cout<<it;
        }
        cout<<endl;
    }
    return 0;
}