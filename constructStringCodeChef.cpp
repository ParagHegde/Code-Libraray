#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
        string s;
        int ct=0;
        char prev,cur;
        for(int i=0;i<n;i++){
            cin>>cur;
            if(cur==prev){
                ct++;
                s.push_back(cur);
            }
            else{
                ct=1;
                prev=cur;
                s.push_back(cur);
            }
            if(ct==3){
                s.pop_back();
                s.pop_back();
                ct=1;
            }
        }
     
        
	    cout<<s<<endl;
	}
	return 0;
}
