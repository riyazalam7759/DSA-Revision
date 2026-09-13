//minimum number of number of bit flips to convert a number to another number
#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int b=17;
    int count=0;
    int c=a^b;//XOR of two number will give us the number of bits that are different in both numbers
    while(c>0)
    {
        count++;
        c=c&(c-1);//eliminating one set bit from the number
    }
    cout<<"Minimum number of bit flips: "<<count<<endl;
}