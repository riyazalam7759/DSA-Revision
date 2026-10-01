//linked list implementation of queue 
//push-> insert at tail
//pop-> delete at head
//front-> head->val
//back-> tail->val
#include<iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class Queue
{
    public:
    int size;
    Node* head;
    Node* tail;
    Queue()
    {
        head=tail=NULL;
        size=0;
    }

    void push(int val)
    {
        Node* temp= new Node(val);
        if(size==0) head=tail=temp;
        else
        {
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void pop()
    {
        if(size==0)
        {
            cout<<"queue is empty UNDERFLOW so cant perform pop operation "<<endl;
            return;
        }
        head=head->next;
        size--;
    }
    int front()
    {
        if(size==0)
        {
            cout<<"queue is empty UNDERFLOW"<<endl;
            return -1;
        }
        return head->val;
    }
    int back()
    {
        if(size==0)
        {
            cout<<"queue is empty UNDERFLOW"<<endl;
            return -1;
        }
        return tail->val;
    }
    void display()
    {
        Node* temp= head;
        while(temp)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    bool empty()
    {
        if(size==0) return true;
        else return false ;
    }

};
int main()
{
      Queue q;
    q.pop();
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
}