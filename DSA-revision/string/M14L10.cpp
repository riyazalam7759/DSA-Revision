//counting most occuring character in a string
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
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

    cout<<endl<<"second method to print frquency of most occuring character in a string"<<endl;
    string s2="therearemany";
    vector<int> arr(26,0);
    for(int i=0;i<s2.length();i++)
    {
        char ch=s2[i];
        int ascii=(int)ch;
        arr[ascii-97]++;
    }

    int maxFreq=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]>maxFreq)
        {
            maxFreq=arr[i];
        }
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]==maxFreq)
        {
            char ch=(char)(i+97);
            cout<<ch<<" "<<maxFreq<<endl;
        }
    }
}

