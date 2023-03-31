#include <iostream>
using namespace std;

int smallestDivisor(int n)
{
    if (n % 2 == 0)
        return 2;
 
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
 
    return n;
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int ct=0;
	    
	    if(x%2==0){
	        if(y%2==0)
	        ct=(y-x)/2;
	        else
	        ct = (y-x)/2 +1;
	    }
	    else{
	    
	    while(x<y){
	        x+=smallestDivisor(x);
	        ct++;
	        if(x %2 ==0){
	            if(y%2==0)
	            ct += (y-x)/2;
	            else
	            ct += (y-x)/2 +1;
	            break;
	        }
	    }
	    }
	    cout<<ct<<endl;
	}
	return 0;
}
