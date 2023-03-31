#include<iostream>
using namespace std;


void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<a[i][j];
    //     }
    // }

    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            swap(a[i][j],a[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j];
        }
    }

    return 0;
}