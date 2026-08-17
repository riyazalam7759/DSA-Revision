#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    
    vector<int> v2;
     v2.push_back(4);
    v2.push_back(5);
    
    vector<int> v3;
    v3.push_back(6);
     v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);

    vector<vector<int>> v;
    //v.push_back(200); => this will give error we cant push element like this way 
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);//we insert vector in the 2D vector

    cout<<v[1][1]<<endl;//=>5

    cout<<" total number of rows :"<<v.size()<<endl;
    cout<<"total number of columns in zeroth rows :"<<v[0].size()<<endl;//=>3
    cout<<"total number of columns in first rows :"<<v[1].size()<<endl;//=>2
    cout<<"total number of columns in second rows :"<<v[2].size()<<endl;//=>5
    
    vector<vector<int>> v4(3,vector<int>(4,100));//=> v4 has 3 rows and 4 columns and each element is 100

}


