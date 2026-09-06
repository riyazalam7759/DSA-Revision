//Bubble Sort Algorithm
#include <iostream>
using namespace std;
int main()
{
    int count=1;
    int arr[]={3,4,2,1,5,7,0};
    bool flag=true;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {  
            if(arr[j]>arr[j+1])
            {
                flag=false;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag==true) break;
        count++;

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"total number of pass or number of times outer loop runs :"<<count;


}