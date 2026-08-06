//pass by reference using pointer
#include<iostream>
using namespace std;

void swap(int *a , int *b)
{
    int  temp= *a;
    *a=*b;
    *b=temp;
    return;

}

int main()
{
    int a=5 , b=7;
    swap(&a , &b);
    cout<<a<<" "<<b;

}




