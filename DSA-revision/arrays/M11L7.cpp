//find tha maximum and minimum element in an array
#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={1,6,10,18,44,32,7,5};
    int max=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max) max = arr[i];
    }
    cout<<"the maximum value in the array is :"<<max<<endl;
    cout<<endl<<"finding second max :";
    int firstMax=INT_MIN+1;
    int secondMax=INT_MIN;
    for(int i =0;i<size;i++)
    {
        if(arr[i]>firstMax)
        {
            secondMax=firstMax;
            firstMax=arr[i];
        }
          if(arr[i]<firstMax && arr[i]> secondMax) secondMax=arr[i];
    }
    cout<<endl<<"first max is :"<<firstMax<<" and second max is :"<<secondMax<<endl;

}

