#include<iostream>
using namespace std;
int main()
{
    int r , c ;
    cout<<"enter rows and columns of matrix :";
    cin>>r>>c;
    int arr[r][c];
    cout<<endl<<"enter the elements of matrix :";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cin>>arr[i][j];
    }
    int minr=0 , maxr= r-1 , minc =0, maxc=c-1;
    while(minr<=maxr && minc<=maxc)
    {
        //right
        for(int i=minc;i<=maxc;i++)
        {
            cout<<arr[minr][i]<<" ";
        }
        minr++;

        if(minr>maxr || minc>maxc) break;
        

        //down
        for(int i=minr;i<=maxr;i++)
        {
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;

        if(minr>maxr || minc>maxc) break;
        

        //left
        for(int i=maxc;i>=minc;i--)
        {
            cout<<arr[maxr][i]<<" ";
        }
        maxr--;

        if(minr>maxr || minc>maxc) break;
        

        //top
        for(int i=maxr;i>=minr;i--)
        {
            cout<<arr[i][minc]<<" ";
        }
        minc++;

    }

}


