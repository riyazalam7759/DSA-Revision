//clyclic swap => this swap works only when i have to do some work on array having n elements having indexing 1 to n
#include <iostream>
using namespace std;
int main()
{ 
    int arr[]={5,1,6,3,4,2};
    int i=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    while(i<n)
    {
        if(arr[i] != i+1) swap(arr[i],arr[arr[i]-1]);
        else i++; 
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}