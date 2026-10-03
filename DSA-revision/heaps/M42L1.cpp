//Priority Queue or Heaps 
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //we can access and pop only top element
    priority_queue<int> pq;//defaulty it forms max heap 
    pq.push(7);
    pq.push(10);
    pq.push(2);
    pq.push(-30);
    pq.push(11);
    pq.push(5);
    cout<<pq.top()<<endl;//=>11
    pq.pop();
    cout<<pq.top();//=>10
    //if you search for the other element then you have to do like stack pop and search
    
     //top() => O(1)
     //push(x) => O(logN)
     //pop() => O(logN)

}
