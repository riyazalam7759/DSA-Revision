//infix to prefix conversion
#include<iostream>
#include<stack>
using namespace std;
int priority(char ch)
{
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
string solve(string val1,string val2 , char ch)
{
    //we have to store prefix in the ans
    //prefix is -> op val1 val2
    string s="";
    s.push_back(ch);
    s += val1;
    s += val2;
    return s;
}

int main()
{
    string s="(7+9)*4/8-3";//infix expression
    //now we need two stack one for values and one for operators
    stack<string> val;
    stack<int> op;
    for(int i=0;i<s.length();i++)
    {
        int ascii=(int)s[i];
        if(ascii>=48 && ascii<=57)//means this is a digit 
             val.push(to_string(ascii-48));
        else //s[i] is an operator -> * , / , + , -
        {
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(')  op.push(s[i]);
            else if(op.top()=='(')  op.push(s[i]);
            
            else if(s[i]==')')
            {
                while(op.top() != '(')
                {
                     char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if(priority(s[i])>priority(op.top())) op.push(s[i]);
            else if(priority(s[i])<=priority(op.top()))//do work 
            {
                while(op.size()>0 && priority(s[i])<=priority(op.top()))
                {//val1 op val2
                    char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    //the operator stack can have values 
    //so make it empty 
    while(op.size()>0)
     {//val1 op val2
        char ch=op.top();
        op.pop();
        string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        string ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<endl<<"the answer of this expression is :";
    cout<<val.top()<<endl;
}