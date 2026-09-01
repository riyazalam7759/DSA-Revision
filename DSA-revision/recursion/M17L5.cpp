//printing substring in the string 
#include <iostream>
#include <string>
using namespace std;
void stringSubset(string s,string res , int size , int i)
{
    if(i==size )
    {
         cout<<res<<" ";
         return;
    }
    stringSubset(s,res +s[i] , size ,i+1);
    stringSubset(s,res,size,i+1);
   
}

int main()
{
    string s="abcd";
    stringSubset(s,"",s.size(),0);
 

    return 0;
}