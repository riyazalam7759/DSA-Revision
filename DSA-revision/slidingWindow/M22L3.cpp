//first negative number in every window of size k
#include <iostream>
using namespace std;
int main()
{
    int arr[]={2,-3,4,4,-7,-1,-2,6};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int negNumIdx=-1;
     int ans[n-k+1];
    for(int i=0;i<k;i++)
    {
        if(arr[i]<0)
        {
             negNumIdx=i;
             break;
        }
    }
    if(negNumIdx==-1) ans[0]=1;
    else ans[0] = arr[negNumIdx];
   
    int i=1;
    int j=k;
    while(j<n)
    {
        if(negNumIdx>=i) ans[i]=arr[negNumIdx];
        else 
        {
            negNumIdx=-1;
            for(int x=i;x<j;x++)
            {
                if(arr[x]<0)
                {
                    negNumIdx=x;
                    break;
                }
            }
            if(negNumIdx != -1) ans[i]=arr[negNumIdx];
            else ans[i]=1;
            
        }
        i++;
        j++;
    }
    for(int l=0;l<(n-k+1);l++)
     cout<<ans[l]<<" ";
}