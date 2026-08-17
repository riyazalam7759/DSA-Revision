#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int rows;
    cout<<"enter the number of rows :";
    cin>>rows;
    vector<vector<int>> v(rows,vector<int>(rows));
    for(int i=0;i<rows ;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0 || i==j)
            {
                v[i][j]=1;
            }
            else
            {
                v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }




}


