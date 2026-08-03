//Printing rhoambus
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter a number :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            if(i+j>=(2*n-1) || i+j<n-1)
                cout<<" ";
                else cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<"method 2 of rhombus"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++) cout<<" ";
        for(int k=0;k<n;k++) cout<<"*";
        cout<<endl;
    }
}

