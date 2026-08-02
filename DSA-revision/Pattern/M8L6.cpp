// floyed Triangle
#include <iostream>
using namespace std;
int main()
{
    int n, a = 1;
    cout << "enter a number :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a << " ";
            a += 1;
        }
        cout << endl;
    }
    int m = 1;
    cout << endl
         << "0 and 1 triangle" << endl;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            m = 1;
        else
            m = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << m << " ";
            if (m == 1)
                m = 0;
            else
                m = 1;
        }
        cout << endl;
    }
    cout << endl
         << "method 2" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)//if both i and j are same even or odd then print 1 else print 0
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    cout<<endl<<"mirror image of star trianglr"<<endl;
    for(int i =0;i<n;i++)
    {
        for(int j= 0 ;j<n;j++)
        {
            if(i+j>=n-1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"method 2 of mirror image of star triangle"<<endl;
    for(int i =0 ;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
