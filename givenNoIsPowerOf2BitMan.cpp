#include<bits/stdc++.h>

using namespace std;

int isPower(int n){
    return (n && !(n & n-1));
}


int main(){
    cout<<isPower(8);
    return 0;
}