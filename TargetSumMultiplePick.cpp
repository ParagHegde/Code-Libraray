#include<bits/stdc++.h>
using namespace std;

void TargetSum(int arr[],vector<vector<int>> &ans,vector<int> v, int n, int i, int sum){
    if(i>=n){
        if(sum==0){
            ans.push_back(v);
        }
        return;
    }
    if(arr[i]<=sum){
        v.push_back(arr[i]);
        TargetSum(arr,ans,v,n,i,sum-arr[i]);
        v.pop_back();
    }
    TargetSum(arr,ans,v,n,i+1,sum);
}




int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> v;
    vector<vector<int>> ans;
    int sum;
    cin>>sum;
    TargetSum(arr,ans,v,n,0,sum);
    for(auto i: ans){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}