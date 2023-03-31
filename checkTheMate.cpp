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
  map<int,int> men;
  for(int i=1;i<=n;i++){
    men[i] = 0;
  }

    //  for(int i=1;i<=n;i++){
    //     cout<<i<<" "<<men[i]<<endl;
    // }


  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      int x;
      cin>>x;
      v.push_back(x);
      if(x!=-1){
        men[x]++;        
      }
    }
  }

    // for(int i=1;i<=n;i++){
    //     cout<<i<<" "<<men[i]<<endl;
    // }

  int i=1,flag=0;
  for(i=1;i<=n;i++){
    if(men[i] == 0){
      cout<<i<<endl;
      flag=1;
    }
  }
  if(flag==0){
    cout<<-1<<endl;
  }

    return 0;
}
