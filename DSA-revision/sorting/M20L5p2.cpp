
//count inversion 
#include<vector>
#include<iostream>
using namespace std;
int countt=0;
int inversion(vector<int> &v1, vector<int> &v2)
{
    int cont=0;
    int i=0;
    int j=0;
    while(i<v1.size() && j<v2.size())
    {
        if(v1[i]>v2[j])
        {
            cont += v1.size()-i;
            j++;
        }
        else i++;//v1[i]<=v2[j];
    }
    return cont;
}
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
void divideNdConq(vector<int> &v)
{
    if(v.size()==1) return;
    int a=v.size()/2;
    int b=v.size()-a;
    vector<int> v1(a);
    vector<int> v2(b);
    for(int i=0;i<a;i++)
     v1[i]=v[i];
    for(int i=0;i<b;i++)
     v2[i]=v[a+i];
     
    
    divideNdConq(v1);
    divideNdConq(v2);
    //count the inversion
    countt += inversion(v1,v2);
    merge(v1,v2,v);  
    v1.clear();//deleting the vector to free up memory
    v2.clear();
}
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(0);
    v.push_back(4);
    v.push_back(9);
    v.push_back(6);
   
    divideNdConq(v);
    
    cout<<" total number of inversion pairs are :"<<countt; 
}