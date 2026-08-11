#include<iostream>
#include<vector>
using namespace std;
void display(int arrr[],int n)
{
   
    for(int i=0;i<n;i++)
    {
        cout<<arrr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr1[5];
    int arr2[7];
    int arr[12];
    cout<<"enter sorted element in the arr1 :";
    for(int i=0;i<5;i++)
    {
        cin>>arr1[i];
        
    }

    cout<<endl<<"enter sorted element in the arr2 :";
    for(int i=0;i<7;i++)
    {
       cin>>arr2[i];
    }
    int i=0,j=0,k=0;
    while(k<12)
    {
        if(arr1[i]<arr2[j])
        {
            arr[k]=arr1[i];
            i++;
            k++;
        }
        else if(arr2[j]<arr1[i])
        {
            arr[k]=arr2[j];
            k++;
            j++;
        }
    }
     int n=sizeof(arr)/sizeof(arr[0]);
    cout<<endl<<"Merged sorted elements are :";
    display(arr,n);

}

