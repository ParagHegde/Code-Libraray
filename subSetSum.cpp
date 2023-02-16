#include<bits/stdc++.h>
using namespace std;


bool subSetSum(vector<int> v, int n, int sum){
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++){
        dp[i][0] = 1;
    }
    for(int i=1;i<=sum;i++){
        dp[0][i] = 0;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(dp[i-1][j]==1){
                dp[i][j] = 1;
            }
            else{
                if(v[i-1] > j){
                    dp[i][j]=0;
                }
                else{
                    dp[i][j] = dp[i-1][j-v[i-1]];
                }
            }
        }
    }
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=sum;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return dp[n][sum];
}


int main(){
    int n;
    cin>>n;
    int sum;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>sum;
    cout<<subSetSum(v,n,sum);
    return 0;
}