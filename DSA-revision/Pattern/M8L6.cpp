//floyed Triangle
#include<iostream>
using namespace std;
int main()
{
    int n ,a=1 ;
    cout<<"enter a number :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<a<<" ";
            a+=1;

        }
        cout<<endl;
    }
    int m=1;
    cout<<endl<<"0 and 1 triangle"<<endl;
    for(int i=0;i<n;i++)
    {
         if(i%2==0) m=1;
         else  m=0;
        for(int j=0;j<=i;j++)
        {
            cout<<m<<" ";
            if(m==1) m=0;
            else m=1;
        }
        cout<<endl;
    }

}


