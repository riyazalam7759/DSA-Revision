#include<iostream>
using namespace std;
int main()
{
    //during declaration you have to give rows and columns as 1D array 
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout<<arr[1][3]<<endl;//=>8
    int arr2[3][3]={1,2,3,4,5,6,7,8,9};
    int arr3[][3] ={1,2,3,4,5,6};//for this kind declaration and initializattion you have to give columns
}


