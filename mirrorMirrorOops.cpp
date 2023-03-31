#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

map<char,char> m;
int main() {
  int j=25;
  for(char i='A';i<='Z';i++){
    m[i]= char(i+j);
    j-=2;
  }
  string s;
  cin>>s;
  int l,r;
  cin>>l>>r;
  j =r-1;
  int i=l-1;
  while(i<=j){
    swap(s[i],s[j]);
    j--;
    i++;
  }
  for(int i=l-1;i<=r-1;i++){
    s[i]=m[s[i]];
  }
  cout<<s;

    return 0;
}
