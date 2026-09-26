//implementation of stack using linked list 
#include <iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node( int val)
    {
        this->val=val;
        next=NULL;
    }
};
class Stack
{
    public:
    int size;
    Node * head;
    Stack()
    {
        size=0;
        head=NULL;
    }
    void push(int val)
    {
        Node * a=new Node(val);
        a->next=head;
        head=a;
        size++;
    }
    void pop()
    {
        if(size==0)
        {
            cout<<"stack is empty ";
            return;
        }
        head=head->next;
        size--;
    }
    Node * top()
    {
        if(size==0)
        {
            cout<<"stack is empty ";
            return NULL;
        }
        return head;
    }
    int sizee()
    {
        return size;
    }
    void display()
    {
        Node * temp=head;
        while(temp)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    Stack st;
    st.push(11);
    st.push(22);
    st.push(33);
    st.display();
    st.pop();
    st.display();
}