#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long n;
  long long zero,one;
  cin>>n>>zero>>one;  
    long long z=zero,o=one;
    long long i= z+o;
    // cout<<i<<endl<<n<<endl;
  long long flag=0;
  while(i<n){
    long long ct;
    if(flag==0){
      z++;
      ct++;
      if(ct==zero){
        flag=1;
        ct=0;
      }
    }
    else{
      o++;
      ct++;
      if(ct==one){
        flag=0;
        ct=0;
      }
    }
    i++;
  }
  cout<<z<<endl;
    return 0;
}
