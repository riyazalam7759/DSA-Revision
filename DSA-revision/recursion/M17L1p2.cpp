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
int main()
{
    string s="membermost";
    cout<<"before removing m :"<<s;
    cout<<endl<<"after removing m :"<<rmvChar(s,"",0);
}


