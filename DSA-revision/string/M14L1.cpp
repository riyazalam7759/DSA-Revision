//String 
#include<iostream>
#include<string>
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

    cout<<endl<<endl<<"another declaration of string ";
    string str4="abcde";
    cout<<endl<<str4;//=>abcde
    cout<<endl<<str4[0];//=>a

    cout<<endl<<endl<<"taking user input in string ";
    string s;
    cin>>s;//if you give space the till that space will be printed means only one word will be printed
    cout<<endl<<"user input string is :"<<s;
    //but 
    string s2="this is a good boy";
    cout<<endl<<s2;//=> this is a good boy 
     string s3;
     getline(cin,s3);//=> this will also take spaces as input
     cout<<s3;//=>including space


}



