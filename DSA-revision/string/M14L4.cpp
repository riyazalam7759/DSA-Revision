#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="abcde";
    cout<<str<<endl;
    str.push_back('f');
    str.push_back('g');
    cout<<str<<endl;
    cout<<"size of string is "<<str.size()<<endl;
    cout<<str.length();
    //str.push_back("hijk"); we cant this way to insert element 
    str.pop_back(); //it will delete the last character of string 
    
    string str2="mno";
    string str3="pqrst";
    cout<<endl<<str2;
    str2=str2+str3;
    cout<<endl<<str2;
    str2=str2+"xy";
    cout<<endl<<str2;
    str2=str2+'a';
    cout<<endl<<str2;
    
    str2="stuv"+str2;
    cout<<endl<<str2;


}
