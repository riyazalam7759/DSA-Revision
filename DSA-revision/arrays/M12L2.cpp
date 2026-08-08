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

    cout<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<*ptr1<<" ";//print all the elements
        ptr1++;
    }
    ptr1=arr2;
    *ptr1=9;//ptr[0]=9;
    ptr1++;
    *ptr1=10;
    ptr1--;
cout<<endl;
     for(int i=0;i<6;i++)
    {
        cout<<*ptr1<<" ";//print all the elements after changing value
        ptr1++;
    }
cout<<endl;
     for(int i=0;i<6;i++)
    {
        cout<<i[arr]<<" ";//we can also print this way
        
    }




}


