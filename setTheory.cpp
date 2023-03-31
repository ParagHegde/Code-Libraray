#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int m;
    cin>>n>>m;
    set<int> s1;
    set<int> s2;
    for(int i=0;i<n;i++){
        int x;
         cin>>x;
         s1.insert(x);
    }

    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        s2.insert(x);
    }
    int size = s1.size()+s2.size();
    vector<int> v1(size);
    vector<int> v2(size);
    set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),v1.begin());
    set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),v2.begin());
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }

    return 0;
}