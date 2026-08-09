//Operation on Vector
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    cout<<endl<<"size :"<<v.size()<<" capacity :"<<v.capacity();
     v.push_back(11);
    cout<<endl<<"size :"<<v.size()<<" capacity :"<<v.capacity();
     v.push_back(12);
    cout<<endl<<"size :"<<v.size()<<" capacity :"<<v.capacity();
     v.push_back(13);
    cout<<endl<<"size :"<<v.size()<<" capacity :"<<v.capacity();
     v.push_back(14);
    cout<<endl<<"size :"<<v.size()<<" capacity :"<<v.capacity();
    //every time vector get double when vector is full whenever you want to push new element 
      v.pop_back();//=>last element get deleted
    cout<<endl<<"size :"<<v.size()<<" capacity :"<<v.capacity();
     v.pop_back();//size will be decreased but not capacity 
    cout<<endl<<"size :"<<v.size()<<" capacity :"<<v.capacity();
    
    cout<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    cout<<endl<<endl<<"vector with size :";
    vector<int> v2(5);//=>the size of this vector is 5 and capacity is also 5 and get default value 0
    cout<<endl<<"size :"<<v2.size()<<" capacity :"<<v2.size();//=>both will be 5 

    cout<<endl<<v2[0]<<" "<<v2[3];//=>will give 0 0 both 

    vector<int> v3(7,100);//=>declared size and capacity is 7 but default value of each element is 100
    cout<<endl<<v3[4]<<" "<<v3[6];

    cout<<endl<<endl<<"taking input in vector";
    vector<int> v4(4);
    cout<<endl<<"enter the four elements in vector :";
    for(int i =0;i<4;i++)
    {
        cin>>v4[i];//=>we cant take input this way if we havent give the size of vector during declaration
    }
    cout<<"elements are :";
    for(int i =0;i<4;i++) cout<<v4[i]<<" ";
    cout<<endl<<"taking input without declaring size enter six element :";
    vector<int> v5;
    for(int i=0;i<6;i++)
    {
        int ele;
        cin>>ele;
        v5.push_back(ele);
    }
    cout<<"elements are :";
    for(int i=0;i<6;i++) cout<<v5[i]<<" ";
    
}




