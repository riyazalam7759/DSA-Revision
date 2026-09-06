//finding square of a number using binary search 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number :";
    cin>>n;
    int l=0,h=n,m=0;
    while(l<=h)
    {
        m=l+(h-l)/2;
        if(m*m==n) 
        {
            cout<<" the nums is "<<m;
            break;
        }
        
        else if(m*m<n) l=m+1 ;
        else h=m-1;
    }
    cout<<h;
}


