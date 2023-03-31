#include<iostream>

using namespace std;


int factorial(int num)
{
    int fact=1;
    for(int i=2;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}





int main()
{
    int n,r;
    cin>>n>>r;
    cout<<"The value of nCr is"<<endl;
    int ans;
    int factN=factorial(n);
    int factR=factorial(r);
    int factN_R=factorial(n-r);
    ans=factN/(factR*factN_R);
    cout<<ans;
    return 0;
}