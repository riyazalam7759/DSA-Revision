
#include<iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    cout<<st.size();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<endl<<"now the sizzze is :"<<st.size();
    cout<<endl<<"printing the element of stack :";
    while(st.size())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    stack<int> temp;
    cout<<endl<<"printing element of the stack :";
    while(st.size())
    {
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    while(temp.size())
    {
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
} 