//Quick Sort Algorithm
#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &v ,int si,int ei)
{
    int pivotEle=v[si];
    int pivotIdx=-1;
    int count=0;
    for(int i=si+1;i<=ei;i++)
    {
        if(pivotEle>=v[i]) count++;
    }
    pivotIdx=count+si;
    swap(v[pivotIdx],v[si]);
    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx)
    {
        if(v[i]<=pivotEle) i++;
        else if(v[j]>pivotEle) j--;
       else
        {
             swap(v[i],v[j]);
             i++;
             j--;
        }
       
    }
    return pivotIdx;
}
 void QuickSort(vector<int> &v,int si,int ei)
 {
    if(si>=ei) return;
    int pivotIdx=partition(v , si,ei);
    QuickSort(v,si,pivotIdx-1);
    QuickSort(v,pivotIdx,ei);

 }
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(8);
     v.push_back(2);
    v.push_back(5);
    v.push_back(6);
     v.push_back(3);
    v.push_back(4);
    
    int n=v.size();
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";

    QuickSort(v,0,n-1);

    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    


}