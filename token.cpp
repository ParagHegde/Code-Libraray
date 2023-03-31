#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    string s;
  string st;
  getline(cin,s);
    int n= s.length();
  for(int i=0;i<n;i++){
    if(s[i]!=' '){
      st.push_back(s[i]);
    }
  }
  st.push_back('0');
    int num = stoi(st);

  int k;
  cin>>k;
  while(k--){
    string operation;
    cin>>operation;
    if(operation == "request" ){
      num+=1;
    }
    else if(operation == "print"){
      cout<<num<<endl;
    }
    else{
      num--;
    }
  }
    return 0;
}
