#include<bits/stdc++.h>

using namespace std;

int n;

int BinarySearch(int a[],int n,int key)
{
    int first=0;
    int last=n-1;
    int mid;
    while(first<=last)
    {
    mid=(first+last)/2;
    if(key==a[mid])
    {
        return mid;
    }
    else if(key<a[mid])
    {
        last=mid-1;
    }
    else 
    {
        first=mid+1;
    }
    }
   
    return -1;
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

int main()
{
    cout<<"Enter size of array\n";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements\n";
    input(a,n);
    display(a,n);
    int key;
    cout<<"enter element to search\n";
    cin>>key;
    int pos=BinarySearch(a,n,key);
    if(pos==-1)
    {
        cout<<"Not found\n";
    }
    else
        cout<<a[pos]<<" found at position "<<pos<<endl;
    return 0;
}