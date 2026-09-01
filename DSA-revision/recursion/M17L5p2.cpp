//printing substring of array 

#include <iostream>
#include<vector>
using namespace std;

void printSubset(int arr[],int n,int i,vector<int> ans)
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
    printSubset(arr,n,i+1,ans);
    ans.push_back(arr[i]);
    printSubset(arr,n,i+1,ans);
    
}

int main()
{
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    printSubset(arr,n,0,v);
    

    return 0;
}