#include<bits/stdc++.h>
using namespace std;

vector<string> extra;

void generateParanthesis(string s,int open, int close){
    if(open ==0 && close ==0){
        extra.push_back(s);
        return;
    }
    if(open>0){
        s.push_back('(');
        // cout<<s<<endl;
        generateParanthesis(s,open-1,close);
        s.pop_back();
    }
    if(close>0){
        if(open<close){
        s.push_back(')');
        generateParanthesis(s,open,close-1);
        s.pop_back();
        }
    }
} 


int main(){

    int n;
    cin>>n;
    string s;
    int open = n, close =n;
    generateParanthesis(s,open,close);
    for(int i=0;i<extra.size();i++){
        cout<<extra[i]<<endl;
    }
    return 0;
}