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
  vector<pair<int,int>> ct;
  vector<int> countArray;
  int start=0, end=0;
  int count =0;  
  for(int i=0;i<n;i++){
    start = v[i];
    int j=i;
    while(v[j]<=v[j+1] && j<n-1){
        j++;
        count++;
    }
    end = v[j];
    ct.push_back({start,end});
    countArray.push_back(count);
    count=0;
  }

    // for(int i=0;i<countArray.size();i++){
    //     cout<< countArray[i]<<" ";
    //     cout<<ct[i].first<<" "<<ct[i].second<<endl;
    // }


  int highIndex = 0;
  int i=1;
   for(i=1;i<countArray.size();i++){
    if(countArray[i]>countArray[highIndex]){
        highIndex = i;
    }
   }
   cout<<ct[highIndex].first<<" "<<ct[highIndex].second<<endl;
  return 0;
}
