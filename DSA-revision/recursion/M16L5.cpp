#include<iostream>
using namespace std;
int raisedPower(int a, int b)
{
    if(a==0 && b==0)
    {
        cout<<"0 raised to power 0 is not defined ";
        return -100;
    }
    if(a==0) return 0;
    if(b==0) return 1;
    if(b==1) return a;
    return a*raisedPower(a,b-1);
}
int main()
{
    int a,b;
    cout<<"enter a number :";
    cin>>a;
    cout<<"enter power of the number :";
    cin>>b;
    cout<<a<<" raised to power "<<b<<" is :"<<raisedPower(a,b);
}

