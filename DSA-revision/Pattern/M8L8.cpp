//print pyramid pattern
#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter the height of the pyramid :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=2*n;j++)
        {
            if((i+j)<n-1 ||(j-i)>=n ) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
}

