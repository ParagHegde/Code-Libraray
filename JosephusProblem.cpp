#include<bits/stdc++.h>
using namespace std;

int getPosition(int n){
    int pos=0;
    while(n>0){
        pos++;
        n= n>>1;
    }
    return pos;
}


int main(){
    int n;
    cin>>n;
    // int logg = log2(n);
    // int power = pow(2,logg);
    // int ans= (n-power)*2;
    // cout<<ans+1;
    int pos= getPosition(n)-1;
    n = (n ^ (1<<pos));
    n = n<<1;
    n= n|1;
    cout<<n;
    return 0;
}