//check whether the given number is prime or not 
#include<iostream>
#include<cmath>//for sqrt() function
using namespace std;

bool isPrime(int n)
{
    if(n==1) return false ;
    for(int i=2;i<n;i++) //int place of i<n we can write like i<sqrt(n)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    cout<<isPrime(13)<<endl;
}