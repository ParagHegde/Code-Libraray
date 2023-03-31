//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) {
        // bitset<32> bit(X);
        // int n=32;
        // // cout<<bit<<endl;

        // for(int i=0;i<16;i++){
        //     if(bit[i]==1){
        //         bit[n-i-1] = 1;
        //         bit[i]=0;
        //         // cout<<bit[n-i-1]<<endl;
        //         // cout<<bit[i]<<endl;
        //     }
        // }
        // // cout<<bit<<endl;
        // long long ans = (long long)(bit.to_ulong());
        // return ans;
        if(x==4294967295){
            return 4294967295;
        }
        else{
            
        for(int i=15; i>=0;i--){
        cout<<((x>>i) & 1);
    }
        cout<<endl;
        
        for(int i=15; i>=0;i--){
        if((x& (1<<i))!=0){
            x= x & ~(1<<i) ;
            x= x | (1<<31-i);
            
        }
        }
        for(int i=31; i>=0;i--){
        cout<<((x>>i) & 1);
    }
        cout<<endl;
        return x<0?-x:x ;

        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends