//checking whether the given brackets are balanced or not
#include <iostream>
#include<stack>
#include<string>
using namespace std;
bool isBalanced(string s)
{
    if(s.length()%2!=0) return false;
    stack <char>st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
            st.push(s[i]);//or st.push('(');
        else//s[i]==')'
        {
            if(st.size()==0) return false;
            else st.pop();
        }
    }
    if(st.size()==0) return true;
    else return false ;
}
int main()
{
    string s="()()()";
    if(isBalanced(s))
        cout<<"The brackets are balanced."<<endl;
    else
        cout<<"The brackets are not balanced."<<endl;
}