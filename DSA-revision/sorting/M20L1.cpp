//merging of two sorted array in a single array with sorting
#include<vector>
#include<iostream>
using namespace std;
void merge(vector<int> &v1,vector<int> &v2,vector<int> &res)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<v1.size() && j<v2.size())
    {
        if(v1[i]<v2[j])
        {
            res[k]=v1[i];
            i++;
        }
        else 
        {
            res[k]=v2[j];
            j++;
        }
        k++;
    }
    if(i>=v1.size())
    {
        while(j<v2.size())
        {
            res[k]=v2[j];
            k++;
            j++;
        }
    }
    if(j>=v2.size())
    {
        while(i<v1.size())
        {
            res[k]=v1[i];
            k++;
            i++;
        }
    }

}
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);
   
    vector<int> v2;
     v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(10);
    v2.push_back(12);
   
    int n1=v1.size();
    int n2=v2.size();
    vector<int> res(n1+n2);
    merge(v1,v2,res);
    for(int i=0;i<res.size();i++)
    cout<<res[i]<<" ";
}