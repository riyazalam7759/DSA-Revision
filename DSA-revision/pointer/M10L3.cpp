//writing program to add two numbers using pointers 
#include<iostream>
using namespace std;
int main()
{
    int c;
    int a=5 , b=8;
    int * p1=&a;
    int * p2=&b;
    int * p3=&c;
    *p3=*p1+*p2;
    cout<<"The sum is : "<<*p3<<endl;

}
