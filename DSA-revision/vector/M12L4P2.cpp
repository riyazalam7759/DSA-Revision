#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(1);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    v.at(2)=22;//=> we have update the value at index 2
    cout<<"value at index 1 :"<<v.at(1)<<" value at index 2 :"<<v.at(2);//=>11 and 22 changed
    cout<<endl<<"elements are :";
    for(int i =0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    sort(v.begin(),v.end());//=>sorting the vector
    cout<<endl<<"sorted elements are :";
    for(int i =0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }

}

