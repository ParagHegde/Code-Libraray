#include<bits/stdc++.h>

using namespace std;


int minEnergyFrog( int i, int arr[], vector<int> &dp){
    if(i==0){
        return 0;
    }
    if(dp[i]!= -1) return dp[i];
    int l = minEnergyFrog(i-1,arr,dp)+ abs(arr[i-1]-arr[i]);
    int r= INT_MAX;
    if(i>1){
        r= minEnergyFrog(i-2,arr,dp)+abs(arr[i-2]-arr[i]);
    }
    return dp[i] = min(l,r);
}

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minEnergyFrog(n-1,arr,dp);

    return 0;
}