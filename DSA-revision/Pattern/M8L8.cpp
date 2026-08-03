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
    cout<<endl<<"method 2 of pyramid"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++) cout<<" ";
        for(int k=0;k<2*i-1;k++) cout<<"*";
        cout<<endl;
    }

    int nst =1;
    int nsp = n-1;
    cout<<endl<<"method 3 of pyramid"<<endl;
    for(int i=0;i<n;i++)
    {

       for(int j=0;j<nsp;j++) cout<<" ";
       nsp--;
       for(int k=0;k<nst;k++) cout<<"*";
       nst += 2;
       cout<<endl;
    }

    int a=1;
    cout<<endl<<"Printing Number Pyramid"<<endl;
    for(int i = 0;i<n;i++)
    { 
        a=1;
        for(int j=0;j<=2*n;j++)
        {
            if((i+j)<n || (j-i)>n) cout<<" ";
            else
            {
               
                cout<<a;
                if(j<n) a++;
                else a--;
                
            }
        }
        cout<<endl;
    }


}

