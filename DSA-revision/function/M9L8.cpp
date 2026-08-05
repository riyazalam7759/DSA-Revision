#include<iostream>
using namespace std;
int gcd(int a ,int b)
{
    int f=1;
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        {
            f=i;
        }
    }
    return f;
}

int gcd2(int a ,int b)
{
    int f=1;
    for(int i=min(a,b);i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            f=i;
        }
    }
    return f;
}


int  main()
{
   
    int n=8;
    cout<<&n<<endl;
}