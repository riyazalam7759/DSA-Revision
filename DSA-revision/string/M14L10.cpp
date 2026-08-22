//counting most occuring character in a string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="thereeendme";
    int count=1;
    int maxCount=0;
    char ch='\0';
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==ch) 
        {
            count++;
            maxCount=count;
        }
        else
        {
            ch=s[i];
            count=0;
        }
    }
    cout<<maxCount+1;
}


