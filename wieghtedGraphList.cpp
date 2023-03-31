#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> graph[n];
    for(int i=0;i<m;i++){
        int x,y,w;
        cin>>x>>y>>w;
        graph[x].push_back({y,w});
        graph[y].push_back({x,w});
    }

    for(int i=0;i<n;i++){
        cout<<i<<"->";
        for(int j=0;j<graph[i].size();j++){
            cout<<graph[i][j].first<<" "<<graph[i][j].second<<",";
        }
        cout<<endl;
    }
    return 0;
}