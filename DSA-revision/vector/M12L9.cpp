//sorting of 0 and 1
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    int i=0;
    int j=v.size()-1;
    while(i<=j)
    {
        if(v[i]==1 && v[j]==0)
        {
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
        if(v[i]==0) i++;
        if(v[j]==1) j--;
    }
    display(v);

    cout<<endl<<"second method"<<endl;
     vector<int> v2;
    v2.push_back(1);
    v2.push_back(0);
    v2.push_back(0);
    v2.push_back(1);
    v2.push_back(0);
    v2.push_back(1);
    v2.push_back(0);
    int noz =0;//number of zeros
    int noo =0;//number of one
    for(int i=0;i<v2.size();i++)
    {
        if(v2[i]==0) noz++;
        if(v2[i]==1) noo++;
    }
    for(int i=0;i<noz;i++)
        v2[i]=0;
    for(int i=noz;i<noz+noo;i++)
        v2[i]=1;
    display(v2);
    

}


