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
void binStrWoutcon1(string s, int n)//this is the main functoin
{
    if(s.size()==0)
    {
        cout<<s<<endl;
        return;
    }
    binStrWoutcon1(s+'0',n);
    if(s.size()==0) binStrWoutcon1(s+'1',n);
    if(s[s.size()-1]=='0') binStrWoutcon1(s+'1',n);
    //or we can write for both if conditon line in one line 
    //if(s.size()==0 || s[s.size()-1]=='0') binStrWoutcon1(s+'1',n);
}

int main()
{
    binStr(4,0,"");

}
