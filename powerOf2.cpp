#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    if(__builtin_popcount(n)==1 || __builtin_popcount(n)==0){
        cout<<"power of 2"<<endl;
    }else{
        cout<<"not power of 2"<<endl;
    }
    return 0;
}