// implement a MinHeap by array
#include <iostream>
using namespace std;
class MinHeap
{
public:
    int arr[50];
    int idx;
    MinHeap() // constructor
    {
        idx = 1;
    }
    int top()
    {
        return arr[1];
    }
    void push(int val)
    {
        arr[idx] = val;
        int i = idx;
        idx++;
        // swapping till i==1
        while (i != 1)
        {
            if (arr[i] < arr[i / 2])
                swap(arr[i], arr[i / 2]);
            else
                break;
            i = i / 2;
        }
    }
    void pop()
    {
        idx--;
        arr[1] = arr[idx];
        int i = 1;
        while (true)
        {

            int left = 2 * i, right = 2 * i + 1;
            if (left > idx - 1) break;
            if (right > idx - 1)
            {
                if (arr[i] > arr[left])
                {
                    swap(arr[i], arr[left]);
                    i = left;
                }
                break;

            }
            if (arr[left] < arr[right])
            {
                if (arr[i] > arr[left])
                {
                    swap(arr[i], arr[left]);
                    i = left;
                }
                else
                    break;
            }
            else
            {
                if (arr[i] > arr[right])
                {
                    swap(arr[i], arr[right]);
                    i = right;
                }
                else
                    break;
            }
        }
    }
    int size()
    {
        return idx - 1;
    }

    void display()
    {
        for (int i = 0; i < idx; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};
int main()
{
    MinHeap pq;
    pq.push(20);
    pq.push(30);
    pq.push(8);
    pq.push(10);
    pq.display();
    pq.push(1);
    pq.push(3);
    pq.push(7);
    pq.display();
    cout << "size is :" << pq.size() << endl;
    pq.pop();
    pq.display();
    cout<<"the top element of the MinHeap is :"<<pq.top()<<endl;
}