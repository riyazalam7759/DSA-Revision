#include<iostream>
using namespace std;
int nthFibbo(int n)
{
    if(n==1 || n==2) return 1;
    return nthFibbo(n-1)+nthFibbo(n-2);
}
int main()
{
    int n;
    cout<<"enter nth number : ";
    cin>>n;
    cout<<n<<"th fibonacci number is :"<<nthFibbo(n);
}


