//Maximum sum of subarray of lenght k this is optimal solution 
#include<iostream>
#include<climits>
#include <algorithm>
using namespace std;
int main()
{
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxSum=INT_MIN;
    int maxIdx=-1;
    int prevSum=0;
   
     for(int i=0;i<k;i++)
     {
        prevSum += arr[i];
     }
     maxSum=prevSum;
     int i=1;
     int j=k;
     while(j<n)
     {
        int currSum=prevSum+arr[j]-arr[i-1];
        if(maxSum<currSum)
        {
            maxSum=currSum;
            maxIdx=i;
        }
        prevSum=currSum;
        i++;
        j++;
     }
     cout<<" maximum sum of subrray of length "<<k<<" is :"<<maxSum;
     cout<<endl<<" and index of subarray starts with :"<<maxIdx;
}

