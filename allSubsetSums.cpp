#include<bits/stdc++.h>
using namespace std;

void generateSubsetSum(int sum, int n, int i, vector<int> &ans, int arr[]){
    if(n==i){
        ans.push_back(sum);
        return;
    }

    generateSubsetSum(sum+arr[i],n,i+1,ans,arr);
    generateSubsetSum(sum,n,i+1,ans,arr);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans;
    generateSubsetSum(0,n,0,ans,arr);
    for(auto it: ans){
        cout<<it<<endl;
    }
    return 0;
}