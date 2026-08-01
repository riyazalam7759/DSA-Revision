//M7L4 PW
#include<iostream>
using namespace std;
int main(){
    cout<<"this is the end ";
    int n ;
    cout<<"enter a number :";
    cin>>n;
    for(int i=1;i<=2*n-1;i += 2)//Arithmatic progresssion 
    {
        cout<<i<<" ";
    }
    int a = 1;
    cout<<endl;
    for(int i= 1;i<=n ; i++)//GP with common ration 2
    {
        cout<<a<<" ";
        a=a*2;
    }
    cout<<endl;
    int b=100;
    for(;b>0;)//number series 100 to 0 with common difference -3 
    {
        cout<<b<<" ";
        b=b-3;
    }


}