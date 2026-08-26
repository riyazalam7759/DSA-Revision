//removing character 'm' from a string using recursion
#include<iostream>
using namespace std;
void rmvChar(string s,string t,int i)
{
    if(i==s.size())
    {
        cout<<t;
        return;
    }
    if(s[i] != 'm') t.push_back(s[i]);
    i++;
    rmvChar(s,t,i);
}
int main()
{
    string s="membermost";
    cout<<"before removing m :"<<s;
    cout<<endl<<"after removing m :";
    rmvChar(s,"",0);
}


