//Ordered set
//ordered set store elemenet in increasing order or sorted
//header file is => #include<set>
//insertion , deletion and searching have time complexity O(logN) not O(1)
//its implementation based on balanced binary search tree
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(6);
    s.insert(3);
    s.insert(10);
    s.insert(5);
    for(int ele : s)
    {
        cout<<ele<<" ";
    }

}