//finding first occurence of an element in the array 
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,2,3,3,3,3,3,4,4,5,8,9};
    int t=4;
    int l=0;
    int m=0;
    bool flag=false;
    int h=12;

    while(l<=h)
    {
        m=l+(h-l)/2;
        if(arr[m]==t)
        {
            if(arr[m-1] != t)
            {
                cout<<m;
                flag=true;
                break;
            }
            else
            {
                h=m-1;
            }
        }
        else if(t>arr[m]) l=m+1;
        else h=m-1;
    }
   
    cout<<" first occurence of "<<t<<" is :"<<m;
}


