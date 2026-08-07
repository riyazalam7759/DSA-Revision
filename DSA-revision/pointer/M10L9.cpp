//DOUBLE POINTERS =>stores address of a pointer variable 
//we can also make triple pointer which stores address of double pointer variable and so on
#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *p=&a;
    int **q=&p;
    cout<<"the value of a is: "<<*p<<endl;
    cout<<"the value of a using double pointer is: "<<**q<<endl;
    cout<<"the address of a is: "<<&a<<endl;
    cout<<"the address of a using pointer is: "<<p<<endl;
    cout<<"the address of a using double pointer is: "<<*q<<endl;
    cout<<"the address of pointer p is: "<<&p<<endl;
    cout<<"the address of pointer p using double pointer is: "<<q<<endl;

}

