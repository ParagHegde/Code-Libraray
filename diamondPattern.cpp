#include<bits/stdc++.h>
using namespace std;


void printDiamond(int n) {
        // code here
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            for(int j=0;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for(int j=0;j<=(n-i-1);j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }


    int main(){
        int n;
        cin>>n;
        printDiamond(n);
        return 0;
    }