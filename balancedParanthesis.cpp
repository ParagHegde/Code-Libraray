#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int> brackets={{'(',1},{'{',2},{'[',3},{')',-1},{'}',-2},{']',-3}};

string check(string s){
    stack<char> st;
    for(char i:s){
        if(brackets[i]>0){
            st.push(i);
        }else{
            if(st.empty()) return "No";
            char top=st.top();
            st.pop();
            if(brackets[top]+brackets[i]!=0) return "No";
        }
    }
    // if(st.empty()) return "Yes";
    // return "No";
    return st.empty()?"Yes":"No";
}



int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<check(s)<<endl;
    }
    return 0;
}