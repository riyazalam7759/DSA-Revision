//pushing element at bottom of stack and at any index of stack
#include<iostream>
#include <stack>
using namespace std;
void print(stack<int> st)
{
    while(st.size()>0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
void pushAtBottom(stack<int>& st,int val)
{
    stack<int> temp;
    while(st.size())
    {
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size())
    {
        st.push(temp.top());
        temp.pop();
    }

}
void pushAtIndex(stack<int>& st,int idx,int val)
{
    stack<int> temp;
    while(st.size()>idx)
    {
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size())
    {
        st.push(temp.top());
        temp.pop();
    }

}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);
    cout<<endl;
    pushAtBottom(st,50);
    print(st);
    pushAtIndex(st,2,250);
    print(st);


}