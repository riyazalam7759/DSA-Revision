//finding maximum number among the string 
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main()
{
    string arr[]={"0123","0023","456","000182","940","2905"};
    int max=stoi(arr[0]);
    int idx;
    for(int i=0;i<6;i++)
    {
        if(max<stoi(arr[i]))
        {
            max=stoi(arr[i]);
            idx=i;
        }
    }
    cout<<"mximum number is :"<<max;
    cout<<" and its index is :"<<idx;

}