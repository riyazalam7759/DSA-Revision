//finding number of setbit in a number
#include <iostream>
using namespace std;
//using built in function __builtin_popcount(n);
int setBitCount(int n)
{
    return __builtin_popcount(n);
}
//making function to calculate number of setbits 
int setBitCount2(int n)
{
    int count=0;
    while(n>0)//every time one set bit is eliminated 
    {
        count++;
        n=(n&(n-1));
    }
    return count;
}
int main()
{
    int n;
    cout<<"enter a number :";
    cin>>n;
    cout<<endl<<"using bilt in fucntion => number of set bits in number "<<n<<" are :";
    cout<<setBitCount(n);
    cout<<endl<<" using own made fucntion => number of set bits in number "<<n<<" are :";
    cout<<setBitCount2(n);
}