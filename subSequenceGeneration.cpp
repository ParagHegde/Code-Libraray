#include<bits/stdc++.h>
using namespace std;


void generateSubsequence(int arr[],int n, int i, vector<int> v){
    if(i>=n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    v.push_back(arr[i]);
    generateSubsequence(arr,n,i+1,v);
    v.pop_back();
    generateSubsequence(arr,n,i+1,v);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v ;
    generateSubsequence(arr,n,0,v);
    return 0;
}