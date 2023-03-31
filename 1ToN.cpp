#include<bits/stdc++.h>
using namespace std;

void Print1ToN(int n){
    if(n==0){
        return;
    }
    Print1ToN(n-1);
        cout<<n;
//for N to 1+
        //cout<<n;
        //Print1ToN(n-1);

}


int main(){
    int n;
    cin>>n;
    Print1ToN(n);
    return 0;
}