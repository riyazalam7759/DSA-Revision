//String 
#include<iostream>
using namespace std;
int main()
{
    char str[]={'a','b','c','d'};//at the end of this string array there will be a null character '\0'
    for(int i=0;i<4;i++)
      cout<<str[i]<<" ";
    
    char str3[5]="abcd";//since at the end of string there will be '\0' character so we can insert here only 4 character
    char str2[5]={'m','n','o','p','q'};//but here we can insert 5 character this way 
    char ch='\0';
    cout<<endl<<ch;//=> nothing will be printed
    cout<<endl<<"ASCII value of \0 is :"<<(int)ch;//=> 0
    cout<<endl<<(int)str2[5];//=> 0 cause at the end there is '\0' character
    cout<<endl<<str;// this will print => "abcd"

    
}



