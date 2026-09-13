//given an integerr n, find the maximum power of two that is smaller than n 
#include <iostream>
using namespace std;
//using OR operator and Right shift Operator
int maxPowerNum(int n)
{
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    return (n+1)>>1;//means (n+1)/2
}
int main()
{
    int x=24;
    int temp ;
    while(x != 0)//using Brian Kerniglen's algorithm
    {
        temp=x;
        x=x&(x-1);
    }
    cout<<" the max power of two less than "<<24<<" is :"<<temp;
    //if i have to get the smallest number power of two just greater than number then multiply temp by 2
    cout<<endl<<" the smallest power of two just greater than "<<24<<" is :"<<2*temp;
    cout<<endl<<" the max power of two less than "<<24<<" is :"<<maxPowerNum(24);
}