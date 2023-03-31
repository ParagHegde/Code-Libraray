#include<iostream>

using namespace std;

int max(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>a && b>c)
    {
        return b;
    }
    else 
    return c;
}

bool check(int a,int b,int c)
{
    if(a*a==b*b+c*c)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int num1,num2,num3;
    int a,b,c;
    cin>>num1>>num2>>num3;
    a=max(num1,num2,num3);
    if(num1==a)
    {
        b=num2;
        c=num3;
    }
    else if(num2==a)
    {
        b=num1;
        c=num3;
    }
    else
    {
        b=num1;
        c=num2;
    }

    if(check(a,b,c))
    {
        cout<<"Pythogorian Triplet"<<endl;
    }
    else 
    {
        cout<<"Not a Pythogorian Triplet"<<endl;
    }
    return 0;
}