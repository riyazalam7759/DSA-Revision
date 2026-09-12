//converting decimal to binary and binary to decimal

#include <iostream>
#include<vector>
using namespace std;
//converting decimal to binary using recursion (own)
void decTobin(int n,vector<int> &v)
{
    if(n==0) return;
    decTobin(n/2,v);
    v.push_back(n%2);
}
//converting binary to decimal using left shift operator
int binToDecimal(string &bin)
{
    int n=bin.size();
    int result=0;
    for(int i=n-1;i>=0;i--)
    {
        char ch=bin[i];//current character
        int num=ch-'0';//converting character into number like 1 and 0 by using ASCII
        result += num*(1<<(n-i-1));
    }
    return result ;
}

int main()
{

    vector<int> v;
    decTobin(10,v);
    cout<<" binary of 10 is :";
    for(int i=0;i<v.size();i++)
    cout<<v[i];

    string str="001101";
    cout<<endl<<" decimal of binary number "<<str<<" is :";
    cout<<binToDecimal(str);
}