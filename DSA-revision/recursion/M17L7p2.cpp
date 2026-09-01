//finding all permutation of an string given all elements of the string are unique 
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void subStringPermutations(string s,string ans)
{
    if(s.size()==0)//or s==""
    {
        cout<<ans<<endl;
        return;
    }
    for(int j=0;j<s.size();j++)
    {
        string t=s.substr(0,j)+s.substr(j+1,s.size());
        subStringPermutations(t,ans+s[j]);
    } 
}
int main()
{
    string s="abcd";
    string ans="";
    subStringPermutations(s,ans);
}