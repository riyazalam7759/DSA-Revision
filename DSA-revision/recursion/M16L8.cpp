#include<iostream>
using namespace std;
int pwrFun(int a , int b)
{
    if(a==0 && b==0)
    {
        cout<<" not defined ";
        return -100;
    }
    else if(a==0) return 0;
    
    if(b==0) return 1;
    if(b==1) return a;
    if(b%2==0) return pwrFun(a , b/2)*pwrFun(a , b/2);
    else
    {
       int num=pwrFun(a , b/2)*pwrFun(a , b/2);
       return a*num;
    }
}
int main()
{
    int a , b;
    cout<<"enter number :";
    cin>>a;
    cout<<"enter power :";
    cin>>b;
    cout<<a<<" raised to power "<<b<<" is :"<<pwrFun(a,b);
}



