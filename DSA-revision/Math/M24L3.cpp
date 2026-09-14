//printing all the factors of a number 
#include <iostream>
#include <cmath>
using namespace std;
void printFactor3(int n)
{
    cout<<"this modified version of 2 printFactor3 :";
    for(int i=1;i<sqrt(n);i++)
        if(n%i==0) cout<<i<<" ";
     for(int i=sqrt(n);i>=1;i--)
        if(n%i==0) cout<<n/i<<" ";
    cout<<endl;
}
//optimal function to print all the factors of a number
void printFactor2(int n)
{
    cout<<"printFactor2 :";
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0) 
        {
            cout<<i<<" ";
            if(i!=sqrt(n)) cout<<n/i<<" ";
        }
    }
    cout<<endl;
} 
void printFactor(int n)
{
    cout<<"printFactor :";
    for(int i=1;i<=n;i++)
        if(n%i==0) cout<<i<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cout<<" enter a number :";
    cin>>n;
    printFactor(n);
    printFactor2(n);
    printFactor3(n);
}