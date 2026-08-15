#include <iostream>
using namespace std;
int main()
{
    int r1 , r2 , c1 , c2;

    cout<<"enter the rows and columns of first matrix : ";
    cin>>r1>>c1;

    cout<<"enter the rows and columns of second matrix : ";
    cin>>r2>>c2;

    if(c1==r2)
    {
        int a[r1][c1] ;
        int b[r2][c2];
        int c[r1][c2];

        cout<<endl<<"enter the elements for first matrix :";
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            cin>>a[i][j];
        }

         cout<<endl<<"enter the elements for second matrix :";
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            cin>>b[i][j];
        }
        //multiplying
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(int k=0;k<r2;k++)
                {
                    c[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        //printing the multiplied matrix
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            cout<<c[i][j]<<" ";
            cout<<endl;
        }


    }
    else
    {
        cout<<"matrix multiplication is not possible enter valid rows and columns ";
    }
 
}
