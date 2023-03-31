#include<bits/stdc++.h>
using namespace std;

void towerOfBrahma(int n,char from,char aux, char to){
    if(n==1){
        cout<<"move disc "<<n<<" from "<<from<<" to "<<to<<endl;
        return;
    }

    towerOfBrahma(n-1,from,to,aux);
    cout<<"move disc "<<n<<" from "<<from<<" to "<<to<<endl;
    towerOfBrahma(n-1,aux,from,to);
}


int main(){
    int n;
    cin>>n;
    towerOfBrahma(n,'A','B','C');
    int count = pow(2,n)-1;
    cout<<"NO OF STEPS = "<<count;
    return 0;
}