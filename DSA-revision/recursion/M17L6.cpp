//printing substring of string with dubplicate characters
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void storeSubset(string original ,string ans  , vector<string> &v, bool flag)
{
    if(original=="")
    {
        v.push_back(ans);
        return;
    }
    
    char ch=original[0];
    if(original.length()==1)
    {
        if(flag==true) storeSubset(original.substr(1),ans+ch,v,true);
        storeSubset(original.substr(1),ans,v,true);
        return; //taaki neeche ki do conditions na chale
    }
    char dh=original[1];
    if(ch==dh)//duplicate character
    {
        if(flag==true) storeSubset(original.substr(1),ans+ch,v,true);
        storeSubset(original.substr(1),ans,v,false);
    }
    else//no duplicate 
    {
        if(flag==true) storeSubset(original.substr(1),ans+ch,v,true);
        storeSubset(original.substr(1),ans,v,true);
    }
}

int main()
{
    string s="aaaab";
    vector<string> v;
    storeSubset(s,"",v,true);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    
}