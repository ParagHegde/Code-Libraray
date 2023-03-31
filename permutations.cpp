#include<bits/stdc++.h>
using namespace std;


void permutation(vector<vector<int>> &ans, vector<int> &v,vector<int> arr,vector<int> &dp ){
    if(v.size()==arr.size()){
        ans.push_back(v);
        return;
    } 
    for(int j=0;j<arr.size();j++){
        if(dp[j]==0){
            dp[j]=1;
            v.push_back(arr[j]);
            permutation(ans,v,arr,dp);
            v.pop_back();
            dp[j]=0;
        }
    }
}



int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> ans;
    vector<int> v;
    vector<int> dp(n,0);
    permutation(ans,v,arr,dp);
    for(auto i: ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}