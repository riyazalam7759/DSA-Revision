//Minimum cost to connect all ropes 
//we can connect only two ropes at a time 
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int arr[]={2,7,4,1,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int>,greater<int>> p;
    for(int i=0;i<n;i++) p.push(arr[i]);
    int cost=0;
    while(p.size()>1)
    {
        int x=p.top();
        p.pop();
        int y=p.top();
        p.pop();
        p.push(x+y);
        cost += x+y;
    }
    cout<<" Minimum cost to connect all the ropes is :"<<cost;
}