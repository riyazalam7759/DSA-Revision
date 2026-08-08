#include<iostream>
using namespace std;
int main(){
    for (int i=0;i<4;i++)
    {
        for(int j=1 ;j<=4;j++)
        {
            cout<<j;
        }
        cout<<endl;
    
    }
    for(int i=0;i<4;i++)//triangle pattern
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<"inverted triangle"<<endl;
    for(int i=0;i< 4;i++)//inverted triangle pattern
    {
        for(int j=i;j<4;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<"hollow rectangle"<<endl;
    for(int i = 0 ; i< 5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==0 || j==0 || i==4 || j==4) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }


}

