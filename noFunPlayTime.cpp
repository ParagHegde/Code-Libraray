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
  string s;
  cin>>s;
  char a;
  int no;
  cin>>a>>no;
  map<char,char> m;
  for(char i='A'; i<='Z';i++){
    if(char(i + no*(i-a+1)>'Z')){
      m[i] = char((i + no*(i-a+1)-25));
    }else{
    m[i] = char(i + no*(i-a+1));
    }
  }
  
  for( char i = 'A' ;i <= 'Z' ;i++){
    cout<<i<<" "<<m[i]<<endl;
  }

  map<char,char> v;
  for(char i = 'A'; i<='Z' ;i++){
    v[m[i]]=i;
  }

  //   for( char i = 'A' ;i <= 'Z' ;i++){
  //   cout<<i<<" "<<v[i]<<endl;
  // }
  
  int lgth = s.length();
  for(int i=0;i<lgth;i++){
    s[i] = v[s[i]];
  }
  cout<<s<<endl;
    return 0;
}
