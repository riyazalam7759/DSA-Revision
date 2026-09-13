//flipping bits of a number using bitwise operator
#include<iostream>
using namespace std;
//take a num whose all bits are 1
int setBit(int n)//making all bit 1
{
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    return n;
}
int flipBits(int num,int allSetbit)//apply XOR all 1 bit number with given number then we got a number with flipped bit
{
    return num^allSetbit;
}
int main()
{
    int num;
    cout<<" enter number :";
    cin>>num;
    int allSetbit=setBit(num);
    cout<<" flipped number is :"<<flipBits(num,allSetbit);
}