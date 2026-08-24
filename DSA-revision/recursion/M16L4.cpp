#include<iostream>
using namespace std;
void sumNums(int sum,int n)
{
    if(n==0)
    {
        cout<<"the sum is :"<<sum<<endl;
        return;
    }
    sumNums(sum+n,n-1);
}
int sumNums2(int n)
{
    if(n==0) return 0;
    return n+sumNums2(n-1);\
}
int main()
{
    sumNums(0,5);
    cout<<endl<<"sum is :"<<sumNums2(6);
}


