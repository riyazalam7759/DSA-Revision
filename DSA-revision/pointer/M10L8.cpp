//NULL pointer 
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    cout<<ptr<<endl;//=>this will give any garbage address 

    int *ptr2=NULL;
    cout<<ptr2<<endl;//=> this will give a reserve address 0x0 or 0

    cout<<&ptr2<<endl;//=>this will give the address of ptr2 variable means pointer variable address

    int *ptr3=0;
    cout<<ptr3<<endl;//=> this will give a reserve address 0x0
     
    //int *ptr4='\0'; =>this is a null character but not a null pointer
    int *ptr4=nullptr; //=>this is a null pointer
    cout<<ptr4<<endl;//=> this will give a reserve address 0x0 or 0

    char ch='\0';//ASCII value of null character is 0
    cout<<ch<<"and its ASCII value is :"<<int(ch)<<endl;//=> which is 0
}
