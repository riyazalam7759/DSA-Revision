//printing star bridge
#include <iostream>
using namespace std;
int main()
{
    int n ;
    int nsp=1;
    cout<<"enter number of lines :";
    cin>>n;
    int m=n-1;
    for(int q=1;q<=2*n-1;q++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m+1-i;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++)
        {
            cout<<" ";
        }
        nsp+=2;
         for(int j=1;j<=m+1-i;j++)
        {
            cout<<"*";
        }

          
        cout<<endl;
    }

    m=n-1;
     nsp=1;
     for(int i=1;i<2*n;i++)
     {
        cout<<i;
     }
     cout<<endl;
    for(int i=1;i<=m;i++)
    {
        int a=1;
        for(int j=1;j<=m+1-i;j++)
        {
            cout<<a;
            a++;
        }
        for(int k=1;k<=nsp;k++)
        {
            cout<<" ";
            a++;
        }
        nsp+=2;
        for(int j=1;j<=m+1-i;j++)
        {
            cout<<a;
            a++;
        }
        cout<<endl;
    
    }

    

}


