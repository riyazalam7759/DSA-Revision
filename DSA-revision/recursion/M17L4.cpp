//traversing array using recursion
#include <iostream>
#include <vector>
using namespace std;
void display(int arr[], int size , int i=0)
{
    if(i==size) return;
    cout<<arr[i]<<" ";
    
    display(arr,size,++i);
}

int main()
{
    int arr[]={21,22,23,24,25,26,27,28};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    return 0;
}