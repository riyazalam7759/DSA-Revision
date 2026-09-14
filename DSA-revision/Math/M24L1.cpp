//check whether the given number is prime or not 
#include<iostream>
#include<cmath>//for sqrt() function
using namespace std;
int fac=0;
bool isPrime(int n)
{
    if(n==1) return false ;
    for(int i=2;i<n;i++) //int place of i<n we can write like i<=sqrt(n)
    {
        if(n%i==0) 
        {
            fac=i;
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<" enter number :";
    cin>>n;
    if(isPrime(n)==0)
    cout<<fac<<" is first factorial of "<<n<<" and not a prime number "<<endl;
    else 
    cout<<n<<" is not a prime number ";
}