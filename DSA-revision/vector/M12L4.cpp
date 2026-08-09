//Operation on Vector
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    cout<<endl<<"size :"<<v.size()<<" capacit :"<<v.capacity();
     v.push_back(11);
    cout<<endl<<"size :"<<v.size()<<" capacit :"<<v.capacity();
     v.push_back(12);
    cout<<endl<<"size :"<<v.size()<<" capacit :"<<v.capacity();
     v.push_back(13);
    cout<<endl<<"size :"<<v.size()<<" capacit :"<<v.capacity();
     v.push_back(14);
    cout<<endl<<"size :"<<v.size()<<" capacit :"<<v.capacity();
    //every time vector get double when vector is full whenever you want to push new element 
      v.pop_back();
    cout<<endl<<"size :"<<v.size()<<" capacit :"<<v.capacity();
     v.pop_back();//size will be decreased but not capacity 
    cout<<endl<<"size :"<<v.size()<<" capacit :"<<v.capacity();
}




