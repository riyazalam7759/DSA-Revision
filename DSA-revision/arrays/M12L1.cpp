//passing array to function
#include<iostream>
using namespace std;
//both array a in display and array b in change functions are point to one array which is arr
//so if we make change in anyone then it will the array 
void display(int a[],int size)//this passing of array is pass by reference
{//here we can say that 'a' is a pointer which point arr
    //so here "int size=sizeof(a)/sizeof(a[0])" => may give error 
    for(int i =0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
}
void change(int b[])
{
    b[1]=200;
    b[4]=500;
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    display(arr,5);
    change(arr);
    cout<<endl;
    display(arr,5);
}


