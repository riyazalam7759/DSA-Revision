//transform the same square matrix into its transpose without using the extra array
#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"enter the number of rows or columns for square matrix :";
    cin>>rows;
    int arr[rows][rows];
    cout<<endl<<"enter the elements of the matrix :";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl<<"the real matrix is :"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows;j++)
        {
            if(i==j) continue;
            else if(i<j)
            {
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }

    cout<<endl<<"the transpose matrix :"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

