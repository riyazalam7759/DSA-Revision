//finding smallest missing number from an array having distinct non-negative elements in sorted form arrranging same element in same index
#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,1,2,3,4,8,9,12};
    int l=0;
    int m=0;
    int h=sizeof(arr)/sizeof(arr[0]);
    int ans=-1;//if there is no any missing number then -1 will be printed

    while(l<=h)
    {
        m=l+(h-l)/2;
        if(arr[m]==m) l=m+1;
        else
        {
            ans=m;
            h=m-1;  
        }
    }
    cout<<"the smallest missing number is :"<<ans;

}