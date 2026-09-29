
//solving infix expression with brackets using two stack one is operator stack and a value stack 
#include<iostream>
#include<stack>
using namespace std;
int priority(char ch)
{
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
int solve(int val1,int val2,char ch)
{
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else if(ch=='/') return val1/val2;
    return -1;
}
int main()
{
    string s="5+(2+6)*4/8-3";//infix expression
    //now we need two stack one for values and one for operators
    stack<int> val;
    stack<int> op;
    for(int i=0;i<s.length();i++)
    {
        int ascii=(int)s[i];
        if(ascii>=48 && ascii<=57)//means this is a digit 
             val.push(ascii-48);
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
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans = solve(val1,val2,ch);
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
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans = solve(val1,val2,ch);
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
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        int ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<endl<<"the answer of this expression is :";
    cout<<val.top()<<endl;
}