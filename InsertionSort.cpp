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


void InsertionSort(int a[],int &n)
{
    for(int i=1;i<n;i++)
    {
        int cur=a[i];
        int j=i-1;
        while(a[j]>cur && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=cur;
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    input(a,n);
    display(a,n);
    InsertionSort(a,n);
    display(a,n);
    return 0;
}