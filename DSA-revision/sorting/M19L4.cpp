//push zeroes to end while maintaining the relative order of other elements
#include<iostream>
using namespace std;
int main()
{
    //0 3 6 0 0 5
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<endl<<"enter the element of the array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]==0)
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }  
}