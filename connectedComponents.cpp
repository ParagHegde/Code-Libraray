#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
bool visited[N]={false};
vector<int> graph[N];



void dfs(int vertex){
    visited[vertex]= true;
    for(auto child: graph[vertex]){
        // cout<<"par:"<<vertex<<" child:"<<child<<endl;
        if(visited[child]) continue;
        // cout<<"par:"<<vertex<<" child:"<<child<<endl;
        dfs(child);
    }
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
    int ct=0;
    for(int i=0;i<n;i++){
        if(visited[i]==true) continue;
        dfs(i);
        ct++;
    }
    cout<<ct<<endl;
    return 0;
}
