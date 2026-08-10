//rotate the part of array
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

void reversePart(int i , int j , vector<int> &v)
{
    while(i<=j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
void reverse(vector<int> &v)
{
  
    int i=0;
    int j=v.size()-1;
    while(i<=j)
    {
         int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}

int main()
{
      int k;
    cout<<endl<<"enter the value you want to rotate :";
    cin>>k;
     vector<int> v;
     
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    k=k%v.size();
    display(v);
    // reversePart(0,2,v);
    reverse(v);
    reversePart(0,k-1,v);
    reversePart(k,v.size()-1,v);

    display(v);

}



