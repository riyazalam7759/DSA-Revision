//removing character 'm' from a string using recursion
#include<iostream>
using namespace std;
string rmvChar(string s,string t,int i)
{
    if(i==s.size()) return t;
    if(s[i] != 'm') t.push_back(s[i]);
    i++;
    return rmvChar(s,t,i);
}
//second function
void removeChar(string ans , string original)
{
    if(original.length()==0) 
    {
        cout<<ans;
        return;
    }
    char ch=original[0];
    if(ch=='m') removeChar(ans,original.substr(1));
    else removeChar(ans+ch,original.substr(1));
}
int main()
{
    string s="membermost";
    cout<<"before removing m :"<<s;
    cout<<endl<<"after removing m :"<<rmvChar(s,"",0)<<endl;
    removeChar("",s);
}


