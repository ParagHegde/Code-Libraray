#include<bits/stdc++.h>
using namespace std;


// using memoization technique
// int fibonacci(vector<int> &dp, int n){
//     if(n<=1){
//         return n;
//     }
//     if(dp[n]!=-1) return dp[n];
//     return dp[n]=fibonacci(dp,n-1)+fibonacci(dp,n-2);
// }


// int main(){
//     int n;
//     cin>>n;
//     vector<int> dp(n+1,-1);
//     cout<<fibonacci(dp,n);
//     return 0;
// }

// using tabulation

int main(){

    int n;
    cin>>n;
    //using dp array
    // vector<int> dp(n+1,-1);
    // dp[0]=0;
    // dp[1]=1;
    // for(int i=2;i<=n;i++){
    //     dp[i] = dp[i-1]+ dp[i-2];
    // }

    // cout<<dp[n]<<endl;
    int prev1=0;
    int prev2=1;
    int cur;
    for(int i=2;i<=n;i++){
        cur= prev1+prev2;
        prev1=prev2;
        prev2=cur;
    }
    cout<<prev2;


    return 0;
}