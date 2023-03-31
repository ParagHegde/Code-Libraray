#include<bits/stdc++.h>
using namespace std;


int coinCombo(vector<int> coins,int n,int sum){
    vector<int> dp(sum+1);
    dp[0]=1;
    for(int i=1;i<=sum;i++){
        for(int j = 0;j<n;j++){
            if(i-coins[j]>=0){
                dp[i]=dp[i]+dp[i-coins[j]];
            }
        }
    }
    return dp[sum];
}


int main(){
    int n;
    cin>>n;
    vector<int> coins(n);
    int sum;
    cin>>sum;
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    cout<<coinCombo(coins,n,sum);
    return 0;
}