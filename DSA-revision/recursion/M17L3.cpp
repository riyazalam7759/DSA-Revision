//tower of Hanoi 
//M17L3
#include <iostream>
using namespace std;
void Hanoi(int n,char a, char b,char c)
{
    if(n==0) return ;
    Hanoi(n-1,a,c,b);
    cout<<a<<" ->"<<c<<endl;
    Hanoi(n-1,b,a,c);
}

int main()
{
    Hanoi(5,'A','B','C');
    return 0;
}