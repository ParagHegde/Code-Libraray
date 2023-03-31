#include<bits/stdc++.h>
using namespace std;

string findOrder(string dict[], int N, int K) {
        //code here
        vector<int> adj[K];
        for(int i=0;i<N-1;i++){
            string s1 = dict[i];
            string s2 = dict[i+1];
            int n= min(s1.size(),s2.size());
            for(int j=0;j<n;j++){
                if(s1[j]!=s2[j]){
                    adj[s1[j]-'a'].push_back(s2[j]-'a');
                    break;
                }
            }
        }
        
        // for(auto it:adj){
        //     for(auto jt:it){
        //         cout<<jt;
        //     }
        //     cout<<endl;
        // }
        
        queue<int> q;
        vector<int> topo;
        int indegree[K]={0};
        for(int i=0;i<K;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        
        for(int i=0;i<K;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        
        
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto child:adj[node]){
                indegree[child]--;
                if(indegree[child]==0){
                    q.push(child);
                }
            }
            
        }
        
        string ret;
        for(auto it:topo){
            ret.push_back(char(it+'a'));
        }        
        // cout<<endl;
        return ret;
    }

    int main(){
        int N,K;
        cin>>N>>K;
        string dict[N];
        for(int i=0;i<N;i++){
            string s;
            cin>>s;
            dict[i]=s;
        }
        cout<<findOrder(dict,N,K);
        return 0;
    }