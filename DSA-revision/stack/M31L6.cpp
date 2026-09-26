
#include <iostream>
using namespace std;

class Stack
{
    public:
    int idx;
    int arr[5];//if we need unlimited size then we use vector in place of array 
    Stack()
    {
        idx=-1;
    }
    void push(int val)
    {
        if(idx==sizeof(arr)/sizeof(arr[0]))
        {
            cout<<"stack is full "<<endl;
            return ;
        }
        idx++;
        arr[idx]=val;
    }
    void pop()
    {
        if(idx==-1)
        {
            cout<<"stack is empty";
            return ;
        }
        idx--;
    }
    int top()
    {
        if(idx==-1)
        {
            cout<<"cout stack is empty"<<endl;
            return;
        }
        return arr[idx];
    }
    int size()
    {
        return idx+1;
    }
};

int main()
{
    Stack st;
   st.push(11);
   cout<<st.size()<<endl;
   st.push(22);
   
}