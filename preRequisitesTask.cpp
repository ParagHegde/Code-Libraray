#include<bits/stdc++.h>
using namespace std;

bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    vector<int> adj[N];
	    for(auto it:prerequisites){
	        adj[it.first].push_back(it.second);
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
	    
	    if(topo.size()==N) return true;
	    return false;
	    
	}

int main(){
    int n,p;
    vector<pair<int,int>> prerequisites;
    cin>>n>>p;
    for(int i=0;i<p;i++){
        int x,y;
        cin>>x>>y;
        prerequisites.push_back(make_pair(x,y));
    }
    if(isPossible(n,prerequisites)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}