#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    cout<<endl;
    int i,j,flag=0;
    for(i=0;i<n;i++)
    {
        int key=arr[i];
        for(j=i+1;j<n;j++)
        {
            if(arr[j]==key)
            {
                flag=1;
                break;
            }
            else{
                continue;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(i==n)
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<<i+1<<endl;
    }
}


// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     const int N=1e6+2;

//     int idx[N];

//     for(int i=0;i<N;i++)
//     {
//         idx[i]=-1;
//     }

//     int minIdx=INT_MAX;
//     for(int i=0;i<n;i++)
//     {
//         if(idx[arr[i]]!=-1)
//         {
//             minIdx=min(minIdx,idx[arr[i]]);
//         }
//         else{
//             idx[arr[i]]==i;
//         }
//     }

//     if(minIdx==INT_MAX)
//     {
//         cout<<"-1"<<endl;
//     }
//     else
//     {
//         cout<<minIdx+1<<endl;
//     }
//     return 0;

// }