#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin>>n;
  vector<int> v;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
  }
  stack<int> st;
  vector<int> ct;
  int start=0, end=0;
  int count =0;  
  for(int i=0;i<n;i++){
  if(st.empty()){
    st.push(v[i]);
    start = v[i];
  }  
  else if(st.top()< v[i]){
    st.push(v[i]);
  }
  else{
    end = st.top();
    while(!st.empty()){
      st.pop();
    }
    st.push(v[i]);
    start = v[i];
  }
  }
  cout<<start<<" "<<end<<endl;
  return 0;
}
