#include<bits/stdc++.h>

using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

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


void bubbleSort(int a[],int &n)
{
    for(int i=0;i<=n-2;i++)
    {
        for(int j=0;j<=n-i-2;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    input(a,n);
    display(a,n);
    bubbleSort(a,n);
    display(a,n);
    return 0;
}