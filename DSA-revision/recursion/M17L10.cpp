
#include <iostream>
#include <string>
using namespace std;

int gcd(int n1,int n2)
{
    if(n1%n2==0) return n2;
    int p=n1%n2;
    return gcd(n2,p);
}

int main()
{
    int n1, n2;
    cout<<"enter two numbers :";
    cin>>n1>>n2;
    cout<<"gcd :"<<gcd(n1,n2);
}
