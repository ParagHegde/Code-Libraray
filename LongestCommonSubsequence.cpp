#include<bits/stdc++.h>
using namespace std;

// first APS Problem 1
int longestCommonSubsequence(string a, string b){
    int len1 = a.length();
    int len2 = b.length();
    int lcs[len1+1][len2+1];
    for(int i=0;i<=len1;i++){
        lcs[i][0]=0;
    }
    for(int i=0;i<=len2;i++){
        lcs[0][i]=0;
    }
    for(int i=1;i<=len1;i++){
        for(int j=1;j<=len2;j++){
            if(a[i]==b[j]){
                lcs[i][j]= lcs[i-1][j-1]+1;
            }
            else{
                lcs[i][j]= max(lcs[i-1][j],lcs[i][j-1]);
            }
        }
    }
    return lcs[len1][len2];
}


int main(){
    string str1,str2;
    cin>>str1>>str2;
    cout<<longestCommonSubsequence(str1,str2)<<endl;
    return 0;
}