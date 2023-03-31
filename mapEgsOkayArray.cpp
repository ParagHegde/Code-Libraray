#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
  int t;
  cin>>t;
  while(t--){
    map<int,int> m;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
      m[a[i]]++;
    }
    int k;
    cin>>k;
    int count=0;
    auto i = m.begin();
    for(i = m.begin(); i!=m.end();i++){
      if((*i).second ==k){
        count++;
      }
    }
    if(count == k){
      cout<<1<<endl;
    }
    else{
      cout<<-1<<endl;
    }
  }
  return 0;
}
