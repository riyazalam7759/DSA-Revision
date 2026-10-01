//removing all the elements present at even positions in queue 
//consider 0 based indexing 
#include<iostream>
#include<queue>
using namespace std;
void display(queue<int> &q)
{
    int n=q.size();
    while(n>0)
    {
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
        n--;
    }
    cout<<endl;
}
void rmvEvenPosElement(queue<int> &q)
{
    int n=q.size();
    int i=0;
    while(n>0)
    {
        if(i%2==0)
            q.pop();
        else
        {
            q.push(q.front());
            q.pop();
        }
        i++;
        n--;
    }
}
int main()
{
     queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    rmvEvenPosElement(q);
    display(q);
}