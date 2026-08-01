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
        cout<<i<<endl;
    }
    int a = 1;
    for(int i= 1;i<=n ; i++)//GP with common ration 2
    {
        cout<<a<<endl;
        a=a*2;
    }

}