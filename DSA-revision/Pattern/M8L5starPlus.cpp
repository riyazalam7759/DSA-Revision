// C++ program to print star plus pattern
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any odd number :";
    cin>>n;
    cout<<"star plus pattern"<<endl;
    for (int i = 0; i< n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==(n/2) || j==(n/2))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl<<"cross star pattern"<<endl;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || i+j==n-1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}
