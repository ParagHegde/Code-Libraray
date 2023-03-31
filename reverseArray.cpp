#include<bits/stdc++.h>
using namespace std;

void swapArray(int st, int n, int arr[]){
    if(st>=(n/2)){
        return;
    }
    swap(arr[st],arr[n-st-1]);
    swapArray(st+1,n,arr);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapArray(0,n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}