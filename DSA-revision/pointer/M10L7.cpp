//write a function to find out the first and last digit 
//of a number without returning anything
#include<iostream>
using namespace std;


void LastAndFirstDig(int *lastDig , int *firstDig , int num )
{
    *lastDig=num%10;
    while(num>0)
    {
        *firstDig=num;
        num=num/10;
    }
    
}

int main()
{
    int a , b ,num;
    cout<<"enter the number : ";
    cin>>num;
    LastAndFirstDig(&a,&b,num);
    cout<<"the first digit is :"<<b;
    cout<<endl<<"and the last digit is :"<<a<<endl;
}

