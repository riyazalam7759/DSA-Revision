//count inversion
#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,1,8,2,3};
    int count =0;
    int n=sizeof(arr)/sizeof(arr[0]);
    //brute force approach
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            count++;
        }
    }
    cout<<"number of inversion pairs are :"<<count;
}