//pass by reference using pointer
#include<iostream>
using namespace std;

void swap2(int &a , int &b)//=>pass by reference using reference variable
{
    int  temp= a;
    a=b;
    b=temp;
    return;
}
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
    cout<<a<<" "<<b<<endl;
    int x=3 , y=12;
    swap2(x , y);
    cout<<x<<" "<<y<<endl;

    //just checking 

}




