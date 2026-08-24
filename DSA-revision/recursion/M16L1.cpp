#include<iostream>
using namespace std;
void fun(int n)
{
    if(n==0) return;
    cout<<"before call num is :"<<n<<endl;
    fun(n-1);
    cout<<"after call num is :"<<n<<endl;
}
int main()
{
    fun(4);
}


