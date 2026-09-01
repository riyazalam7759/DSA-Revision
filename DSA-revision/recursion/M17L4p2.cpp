//finding maximum element in the array using recursion
#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int maxVal(vector<int> &v, int i=0,int maxV=INT_MIN)
{
    if(i==v.size()) return maxV;
    if(maxV<v[i]) maxV=v[i];
    return maxVal(v,++i,maxV);
}

int maxVal2(int arr[],int n,int i)
{
    if(i==n) return INT_MIN;
    return max(arr[i],maxVal2(arr,n,i+1));
    
}

int main()
{
    int arr[]={3,7,9,0,12,4,1,44,-3};
    vector<int> v(sizeof(arr)/sizeof(arr[0]));
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int ele:arr)
    {
        v.push_back(ele);
    }
    cout<<"the maximum value in the array is :"<<maxVal(v);
    cout<<endl<<"maximum value using function maxVal2 is:"<<maxVal2(arr,n,0);
    
    return 0;
}