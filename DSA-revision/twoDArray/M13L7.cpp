#include<iostream>
using namespace std;
int main()
{
    int n , m;
    cout<<"enter rows and colums :";
    cin>>n>>m;
    int arr[n][m];
    cout<<endl<<"enter the element in the matrix :";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl<<"normal matrix :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"transpose matrix :"<<endl;
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //storing transpose matrix in new matrix
    int t[m][n];
    for(int i =0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            t[i][j]=arr[j][i];
        }
    }
    cout<<endl<<"printing transpose matrix stored in new matrix :"<<endl;
     for(int i =0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<< t[i][j]<<" ";
        }
        cout<<endl;
    }


    
}


