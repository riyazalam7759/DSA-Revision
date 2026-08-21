#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s="abcdef";
    cout<<s.substr(2);//=>it will print from index 2 to last index
    cout<<endl<<s.substr(2,3);//=> it will print from index 2 and have 3 character after index 2 .. 3 here is lenght 
    cout<<endl<<endl<<"converting number into string ";
    int n=123456;
    string s2= to_string(n);
    cout<<endl<<s2;
    cout<<endl<<"the length of strign s2 is :"<<s2.length();


}