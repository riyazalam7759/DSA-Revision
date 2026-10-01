//array implementation of circular queue 
#include<iostream>
using namespace std;
class Queue
{
public:
      int f;
      int r;
      int arr[5];
      int s;//size
      Queue()
      {
        f=0;
        r=0;
        s=0;
      }
      void push(int val)
      {
        if(r==5)
        {
            cout<<"queue is full we cant push value "<<val<<endl;
            return ;
        }
        arr[r]=val;
        r++;
        s++;
      }
      void pop()
      {
        if((r-f)==0)
        {
            cout<<"queue is empty UNDEERFLOW "<<endl;
            return;
        }
        f++;
        s--;
      }
      int front()
      {
        if(s==0)
        {
            cout<<"queue is empty UNDERFLOW ";
            return -1;
        }
        return arr[f];
      }
      int back()
      {
        if(s==0)
        {
            cout<<"queue is empty UNDERFLOW ";
            return -1;
        }
        return arr[r];
      }
      int size()
      {
        return s;
      }
      bool empty()
      {
        if(s==0) return true;
        else false ;
      }
      void display()
      {
        for(int i=f;i<r;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
      }
};
int main()
{
    Queue q;
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
