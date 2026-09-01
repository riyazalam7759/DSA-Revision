
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printSubArray(int arr[],vector<int> ans,int n,int i)
{
    if(i==n)
    {
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    printSubArray(arr,ans,n,i+1);
    if(ans.size()==0)//ans.size()==0 || arr[i-1]==ans[ans.size()-1] =>no need else if condition
    {
        ans.push_back(arr[i]);
        printSubArray(arr,ans,n,i+1);
    }
    else if(arr[i-1]==ans[ans.size()-1])
    {
         ans.push_back(arr[i]);
        printSubArray(arr,ans,n,i+1);
    }
}

int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    printSubArray(arr,v,n,0);
}
