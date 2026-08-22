//converting string to integer 
#include<iostream>
#include<string>

using namespace std;
int main()
{
    string s="124566";
    int n = stoi(s);//converted string to number 
    cout<<n+1;//=> 1234567

    string s2="1234564243566665";//we use this cause if we want to store very larg number then we store it as string 
    long long num=stoll(s2);// int data type cant store this large number so we take long long
    cout<<endl<<num;

   /*
   we cant do this way
    string s3="ab@#";
    int num2=stoi(s3); 
   */
}