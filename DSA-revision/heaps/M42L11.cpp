//implement a MinHeap by array 
#include<iostream>
using namespace std;
class MinHeap
{ public:
    int arr[50];
    int idx;
    MinHeap()
    {
        idx=1;
    }
    int top()
    {
        return arr[1];
    }
    void push(int val)
    {
        arr[idx]=val;
        int i=idx;
        idx++;
        //swapping till i==1
        while( i !=1 )
        {
           if(arr[i]<arr[i/2])
             swap(arr[i],arr[i/2]);
           else break;
           i=i/2;
        }
    }
    int size()
    {
        return idx-1;
    }

    void display()
    {
        for(int i =0;i<idx;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main()
{
    MinHeap pq ;
    pq.push(20);
    pq.push(30);
    pq.push(8);
    pq.push(10);
    pq.display();
    pq.push(1);
    pq.push(3);
    pq.push(7);
    pq.display();
    cout<<"size is :"<<pq.size()<<endl;


}