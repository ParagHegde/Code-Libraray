#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count =0;
	    for(int i=0;i<n;i++){
	        int tempCount = 0;
	        for(int j=i;j<n;j++){
	            if(s[j]==1){
	                tempCount++;
	            }
	            if(s[j]==0){
	                break;
	            }
	        }
	        count = max(count,tempCount);
	    }
	    cout<<count<<endl;
	}
	return 0;
}
