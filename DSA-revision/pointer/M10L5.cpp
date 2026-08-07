//applying arithmatic operations on  pointer 
#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *p=&a;
    cout<<"the value of a is: "<<*p<<endl;
    *p=*p+1;//(*p)++ we can also write this way
    cout<<"the value of a after adding 1 is: "<<*p<<endl;
   
    cout<<"the address of pointer p is: "<<&p<<endl;
    cout<<"the size of pointer p is: "<<sizeof(p)<<endl;
    cout<<"the size of the value pointed by p is: "<<sizeof(*p)<<endl;
     cout<<"the address of a is: "<<p<<endl;
    cout<<"the address of a is: "<<&a<<endl;
    p=p+1;//either we can write p++ also 
    cout<<"new address after adding 1 to p: "<<p<<endl;
    cout<<"value at new address is: this will be any garbage value: "<<*p<<endl;
}


