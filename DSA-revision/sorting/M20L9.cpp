
#include<iostream>
using namespace std;
int kthSmallest(int arr[],int si,int ei,int k)
{
   int pi=partition(arr,si,ei);
   if(pi+1==k) return arr[pi];
   else if(pi+1<k) return kthSmallest(arr,pi+1,ei,k);
   else return kthSmallest(arr,si,pi-1,k)
}
int main()
{
    int k=3;
    cout<<kthSmallest(arr,0,n-1,k);
}

