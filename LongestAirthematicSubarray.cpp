#include<bits/stdc++.h>

using namespace std;


void input(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


void Longest(int a[],int n)
{
    int ans=2;
    int i=2;
    int pd=a[1]-a[0];
    int cur=2;
    while(i<n)
    {
        if(pd== a[i]-a[i-1])
        {
            cur++;
        }
        else
        {
            pd=a[i]-a[i-1];
            cur=2;
        }
        ans=max(cur,ans);
        i++;
    }
    cout<<ans<<endl;
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    input(a,n);
    //display(a,n);
    Longest(a,n);
    return 0;
}