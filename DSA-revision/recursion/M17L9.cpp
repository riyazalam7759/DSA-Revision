//checking if string is pelindrom or not
#include<iostream>
#include<string>
using namespace std;

bool pelin(string s , int i , int j)
{
    if(i>j) return true;
    if(s[i] != s[j]) return false;
    return pelin(s,i+1,j-1);
}

int main()
{
    string s="boyob";
   cout<<pelin(s,0,4);
}



