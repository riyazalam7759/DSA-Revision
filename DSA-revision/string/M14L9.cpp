//comparing two string are these anagram or not 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    string t;
    cout<<"enter string s :";
    cin>>s;
    cout<<"enter string t :";
    cin>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    bool anag=true;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] != t[i])
        {
            anag=false;
            break;
        }
    }
    if(anag==true) cout<<"s and t are anagaram ";
    else cout<<"s and t are not anagram :";




}

