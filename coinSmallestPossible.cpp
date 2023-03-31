#include<bits/stdc++.h>
using namespace std;

void coinCombo(vector<long long> coins, long long n, long long sum, vector<vector<long long>> &ans, vector<long long> &temp)
{
    if(sum==0){ 
        ans.push_back(temp);
        return;
    }
    for(long long i=0;i<n;i++){
        if(coins[i]<=sum){
        temp.push_back(coins[i]);
        coinCombo(coins,n,sum-coins[i],ans,temp);
        temp.pop_back();
        }
    }
    return;
}

int main(){
    long long n;
    long long sum;
    cin>>n;
    cin>>sum;
    vector<long long> coins(n);
    for(long long i=0;i<n;i++){
        cin>>coins[i];
    }
    vector<vector<long long>> ans;
    vector<long long> temp;
    coinCombo(coins,n,sum,ans,temp);
    long long min = INT_MAX;
    long long sizee= ans.size();
    if(sizee==0){
        cout<<-1<<endl;
        return 0;
    }
    for(long long i=0;i<sizee;i++){
        int size2 =ans[i].size();
        if(size2<min){
            min=ans[i].size();
        }
    }
    // for(auto it:ans){
    //     for(auto jt:it){
    //         cout<<jt<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<min<<endl;
    return 0;
}