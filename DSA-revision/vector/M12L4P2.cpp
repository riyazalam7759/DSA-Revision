#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void change(vector<int> a)
{
    a[0]=100;
    for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

void change2(vector<int> &a)
{
    a[0]=100;
}

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
    cout<<endl<<endl<<"passing vector to the functions ";

    vector<int> v2;
    v2.push_back(50);
    v2.push_back(51);
    v2.push_back(52);
    cout<<endl<<" changed element :";
    change(v2);//this passing of vector is pass by values
    cout<<" there wont be any changes :";//cout it goes pass by value 
    
    for(int i=0;i<v2.size();i++)
     cout<<v2[i]<<" ";

    cout<<endl<<" change2 will change the original vector :";//cause this passing is pass by reference 
    change2(v2);

    for(int i=0;i<v2.size();i++)
     cout<<v2[i]<<" ";
    
}

