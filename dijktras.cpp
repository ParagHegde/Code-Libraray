#include<bits/stdc++.h>
using namespace std;
#define MAX 30
int visited[MAX];


int min(int a,int b)
{
    if(a<=b)
        return a;
    else
        return b;
}

int minimum(int dist[MAX],int n)
{
    int min=999,u;
    for(int j=0;j<n;j++)
    {
        if(visited[j]==0)
        {
            if(dist[j]<min)
            {
                min=dist[j];
                u=j;
            }
        }
    }
    cout<<u<<endl;
    return u;

}

void imp(int a[MAX][MAX],int s,int n)
{
    int m,u;
    visited[s]=1;
    u=s;
    int dist[MAX],path[MAX];
        for(int j=0;j<n;j++)
        {
            dist[j]=a[u][j];
        }
    for(int i=0;i<n;i++)
    {
        path[i]=s;
    }
    for(int i=0;i<n-1;i++)
    {
        u=minimum(dist,n);
        visited[u]=1;
        for(int j=0;j<n;j++)
        {
            if(visited[j]==0)
            {
              m=min(dist[j],(dist[u]+a[u][j]));
           if(m!=dist[j])
           {
               path[j]=u;
               dist[j]=m;
           }

        }
        }
        print(dist,path,n);
    }
    }

void print(int dist[MAX],int path[MAX],int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<dist[i]<<" "<<path[i];
        }
    }

int main()
{
    int a[MAX][MAX];
    int n,s;
    cout<<"enter the no of vertices\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cin>>a[i][j];
        }
    }
    cout<<"enter the source\n";
    cin>>s;
    for(int m=0;m<n;m++)
    {
        visited[m]=0;
    }
    imp(a,s,n);
    return 0;
}

