//WAP a program to copy the contents of array into another in the reverese order

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &a)
{
    for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(7);
    v1.push_back(4);
    display(v1);

    int n=v1.size();
    vector<int> v2(n,0);
    for(int i=0;i<v2.size();i++)
    {
        //i+j=size-1;
        int j=v1.size()-1-i;
        v2[i]=v1[j];
    }
    display(v2);
    cout<<endl<<" reversing array using two pointers "<<endl;
    int i = 0;
    int j=v1.size()-1;
    while(j>i)
    {
        int temp=v1[i];
        v1[i]=v1[j];
        v1[j]=temp;
        i++;
        j--;
    }
    //reverse(v1.begin(),v1.end()) => this can also reverse the array this is built in function

    display(v1);

}

