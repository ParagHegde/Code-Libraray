#include<bits/stdc++.h>
using namespace std;

void permutations(vector<vector<int>> &ans, vector<int> &arr, int ind){
    if(ind == arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=ind;i<arr.size();i++){
        swap(arr[i],arr[ind]);
        permutations(ans,arr,ind+1);
        swap(arr[i],arr[ind]);
    }
}


int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> ans;
    permutations(ans,arr,0);
    for(auto i: ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}