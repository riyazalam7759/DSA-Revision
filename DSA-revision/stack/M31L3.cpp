//reversing a stack 
#include<iostream>
#include<stack>
using namespace std;
void printStack(stack<int> st)
{
     while(st.size())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
     printStack(st);
    stack<int> gt;
    stack<int> rt;
    while(st.size())
    {
        gt.push(st.top());
        st.pop();
    }
    while(gt.size())
    {
        rt.push(gt.top());
        gt.pop();
    }
     while(rt.size())
    {
        st.push(rt.top());
        rt.pop();
    }
    cout<<endl;
     printStack(st);
}