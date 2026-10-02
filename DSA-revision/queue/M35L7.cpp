//reorder queue (interleave 1st half with 2nd half)(do it by using one stack only)
#include<iostream> 
#include<stack>
using namespace std;
#include<queue>
void display(queue<int> &q)
{
    int n=q.size();
    for(int i=0;i<n;i++)
    {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}
int main()
{
    queue<int> q;//10,20,30,40,50,60,70,80
    q.push(10);//answer is => 10,50,20,60,30,70,40,80
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    display(q);
    stack<int> st;
    int n=q.size();
    for(int i =0;i<n;i++)
    {
        if(i<n/2)
        {
            st.push(q.front());
            q.pop();
        }
        else
        {
            q.push(st.top());
            st.pop();
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i<n/2)
        {
            q.push(q.front());
            q.pop();
        }
        else
        {
            st.push(q.front());
            q.pop();
        }
    }
    for(int i=0;i<n/2;i++)
    {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
   display(q);//answer is => 10,50,20,60,30,70,40,80
}