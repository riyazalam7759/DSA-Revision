//passing array to function
#include<iostream>
using namespace std;
//both array a in display and array b in change functions are point to one array which is arr
//so if we make change in anyone then it will the array 
void display(int a[])//this passing of array is pass by reference
{
    for(int i =0;i<5;i++)
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
    display(arr);
    change(arr);
    cout<<endl;
    display(arr);
}


