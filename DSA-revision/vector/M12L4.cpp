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

    cout<<endl<<"vector with size :";
    vector<int> v2(5);//=>the size of this vector is 5 and capacity is also 5 and get default value 0
    cout<<endl<<"size :"<<v2.size()<<" capacity :"<<v2.size();//=>both will be 5 

    cout<<endl<<v2[0]<<" "<<v2[3];//=>will give 0 0 both 

    vector<int> v3(7,100);//=>declared size and capacity is 7 but default value of each element is 100
    cout<<endl<<v3[4]<<" "<<v3[6];

}




