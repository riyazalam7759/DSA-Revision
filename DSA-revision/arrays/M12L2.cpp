//Arrays and pointer 
#include<iostream>
using namespace std;
int main()
{
    char arr[]={'a','b','c','v'};
    int arr2[]={1,2,3,4,5,6};
    char *ptr=arr;
    int *ptr1=arr2;
    int *ptr2=&arr2[0];//ptr1 and ptr2 are same
    //int *ptr=&arr2; =>this will give error
    //int *ptr =arr2[0]; =>this will also give error 
    cout<<arr;
    cout<<endl<<ptr1[2]<<endl;//=>3
    ptr[1]='m';//changed 'b' into 'm'
    for(int i=0;i<6;i++)
    {
        cout<<ptr[i]<<" ";//it will display all the character
    }
}


