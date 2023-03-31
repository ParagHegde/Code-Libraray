#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

//Brute Force Approach 
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }


//     int maxSum=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<=j;k++){
//                 sum+=a[k];
//             }
//             maxSum=max(sum,maxSum);
//         }
//     }
//     cout<<maxSum<<endl;
//     return 0;
// }

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int curSum[n+1];
    curSum[0]=0;
    for(int i=1;i<=n;i++){
        curSum[i]=curSum[i-1]+a[i-1];
    }

    int maxSum=INT_MIN;

    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=curSum[i]-curSum[j];
            maxSum=max(maxSum,sum);
        }
    }

    cout<<maxSum<<endl;

    return 0;
}