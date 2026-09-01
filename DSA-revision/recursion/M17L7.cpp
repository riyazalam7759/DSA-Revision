//print all the increasing subsequences of length k from first n natural numbers
#include <iostream>
#include <string>
#include <vector> 
using namespace std;

void printIncSeq(int arr[],int n, int i,vector<int> ans,int k)
{
    if(i==n)
    {
        if(ans.size()==k)
        {
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(ans.size()+(n-i)<k) return;
    printIncSeq(arr,n,i+1,ans,k);
    ans.push_back(arr[i]);
    printIncSeq(arr,n,i+1,ans,k);
}


int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    int k=3;
    printIncSeq(arr,n,0,v,k);

}