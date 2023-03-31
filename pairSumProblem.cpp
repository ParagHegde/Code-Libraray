#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

bool pairSum(int a[],int n,int k){
    int low=0,high=n-1;
    int sum=0;
    while(low<=high){
        sum=a[low]+a[high];
        if(sum==k){
            return true;
        }
        else if(sum<k){
            low++;
        }
        else{
            high--;
        }
    }
    return false;
}


int main(){
    int n;
    cin>>n;
    int a[n];
    int k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>k;
    cout<<pairSum(a,n,k)<<endl;
    return 0;
}