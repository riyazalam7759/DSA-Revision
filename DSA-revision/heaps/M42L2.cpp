//Min Heap
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //we can access and pop only top element
    priority_queue<int, vector<int>,greater<int>> pq;//this is Min Heap declaration 
    pq.push(7);
    pq.push(10);
    pq.push(2);
    pq.push(-30);
    pq.push(11);
    pq.push(5);
    cout<<pq.top()<<endl;//-30
    pq.pop();
    cout<<pq.top()<<endl;//=>5
}