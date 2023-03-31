#include<bits/stdc++.h>
using namespace std;

void printName(string name, int ct){
    if(ct == 0){
        return;
    }
    cout<<name<<endl;
    ct--;
    printName(name, ct);
}


int main(){
    string name;
    cin>>name;
    printName(name,5);
    return 0;
}