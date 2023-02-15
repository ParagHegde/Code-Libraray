#include<bits/stdc++.h>
using namespace std;

int assignmentProblem(vector<int> cost[],int n){
    int power = pow(2,n);
    int dp[power];
    dp[0]= 0;
    for(int i=1;i<power;i++){
        dp[i] = INT_MAX;
    }
    for(int mask=0;mask<power;mask++){
       int x= __builtin_popcount(mask);
        for(int j=0;j<n;j++){
            if(((1<<j) & mask) == 0){
            int ans = (1<<j)|mask;
            dp[ans] = min(dp[ans] , dp[mask]+cost[x][j] );
            }
        }  
    }
    return  dp[power -1];
}

int main(){
    int n;
        cin>>n;
    vector<int> cost[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            cost[i].push_back(x);
        }
    }
    cout<<assignmentProblem(cost,n)<<endl;
    return 0;
}