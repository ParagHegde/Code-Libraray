#include<bits/stdc++.h>

using namespace std;
int main() {
  int n;
  cin>>n;
  vector<pair<int,int>> v;
  for(int i=0;i<=n;i++){
    int x,y;
    cin>>x>>y;
    v.push_back({x,y});
  }
//   for(int i=0;i<=n;i++){
//     cout<<v[i].first<<" "<<v[i].second<<endl;
//   }
  int veereshDist = v[0].first * v[0].second;
  vector<int> dist(n+1);
  for(int i=0;i<=n;i++){
    dist[i] = v[i].first * v[i].second;
  }

  vector<int> ans(n+1);
  for(int i=1;i<=n;i++){
    ans[i] = veereshDist - dist[i];
  }
//   for(int i=0;i<=n;i++){
//     cout<<ans[i]<<endl;
//   }
  cout<<*max_element(++ans.begin(),ans.end())<<endl;
  cout<<*min_element(++ans.begin(),ans.end());
    return 0;
}