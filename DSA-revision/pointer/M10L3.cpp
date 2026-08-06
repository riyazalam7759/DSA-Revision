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
    int d,e;
    int *p4=&d;
    int *p5=&e;
    cout<<"enter 1st num :";
    cin>>*p4;
    cout<<"enter 2nd num :";
    cin>>*p5;
    cout<<"the sum is :"<<*p4+*p5<<endl;
      cout<<"the sum is :"<<d+e<<endl;
      /*
      int *p1, p2 ; =>here p1 is an int pointer but p2 is an int variable
      */
     int *q1=&d, *q2=&e ; //=>here both p1 and p2 are int pointers
     cout<<q1<<" "<<q2<<endl;
     int *q3, *q4 ; //=>here q3 is an int pointer but q4 is an int variable
     q3=&d;
     q4=&e;
     cout<<q3<<" "<<q4<<endl;
     //all are correct syntax
}

