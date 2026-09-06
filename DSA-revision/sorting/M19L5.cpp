//selection sorting algorithm
#include<climits>
#include <iostream>
using namespace std;
int main()
{
    int arr[]={3,6,2,9,0,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++)
    {
        int minNo=INT_MAX;
         int idx=-1;
        for(int j=i;j<n;j++)
        {
           if(minNo>arr[j])
           {
            minNo=arr[j];
            idx=j;
           }
        }
        swap(arr[i],arr[idx]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

