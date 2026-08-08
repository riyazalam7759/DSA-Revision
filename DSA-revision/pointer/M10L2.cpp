#include<iostream>
using namespace std;
int main()
{
    int x=4;
    int *p=&x;
    cout<<&x << " " << p<<endl;//=>both give same address
    bool y=true;
    bool *q=&y;
    //dereferencing
    cout<<*p<<endl;//=>gives value of x=4
    *p=8;//=>changes value of x to 8
    cout<<x<<" "<<*p<<endl;//=>both give same value 8

}

