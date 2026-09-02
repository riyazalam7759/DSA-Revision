//generate all binary string of length n without consecutive 1's
#include <iostream>
#include <string>
using namespace std;

void binStr(int n,int i,string s)
{
    if(i==n)
    {
        cout<<s<<endl;
        return;
    }
    if(s.size()==0)
    {
        binStr(n,i+1,s+'1');
        binStr(n,i+1,s+'0');
    }
    char ch=s[s.size()-1];
    if(ch=='1')
        binStr(n,i+1,s+'0');
    else
    {
        binStr(n,i+1,s+'1');
        binStr(n,i+1,s+'0');
    }  
}

int main()
{
    binStr(4,0,"");

}
