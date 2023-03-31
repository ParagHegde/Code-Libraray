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




int main()
{
    int n;
    cin>>n;
    int a[n];
    input(a,n);
    display(a,n);
    

    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            cout<<sum<<" ";
        }
    }
    
    
    return 0;
}