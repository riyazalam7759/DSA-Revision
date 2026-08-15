//print the elements of 2D array in spiral form or wave form
#include <iostream>
using namespace std;
int main()
{
    int r , c;
    cout<<"entr the rows and columns of matrix :";
    cin>>r>>c;
    int a[r][c];
    cout<<endl<<"enter the elements for the matrix :";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cin>>a[i][j];
    }

    for(int i=0;i<r;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<c;j++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        else 
        {
            for(int j=c-1;j>=0;j--)
            {
                cout<<a[i][j]<<" ";
            }
        }
    }

}

