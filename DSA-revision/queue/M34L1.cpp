//basics of queue
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    //push 
    //pop 
    //front -> top
    //size 
    //back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<endl<<q.front();//=>10
    cout<<endl<<q.back();//=>50
    cout<<endl<<q.size();//=>5
    q.pop();
    cout<<endl<<q.front();//=>20
    cout<<endl<<q.size();//=>4
    //push()=>insertion heppens only at the back tc=O(1)
    //pop()=>poping heppens only at the front tc=O(1)
    //front()=>we can access front element of queue
    //back()=>we can also access the rear element
    //size()=>returns the size of the queue 
    //empty()=>it returns true if the size is zero else it returns false
    //overflow heppens when we implement queue using array
    //uderflow=> whenever the queue is empty and we try to use pop() front() back()
}