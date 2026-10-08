//Ordered map
#include<iostream>
#include<map>//header file for ordered map
using namespace std;
int main()
{
    //insertion , deletion and searching time complexity is O(logN)
    //ordered map store element in increasing order (sorting)
    map<int,int> m;
    m[3]=30;
    m[2]=20;
    m[7]=70;
    m[1]=10;
    for(auto x : m)
    {
        cout<<"key is :"<<x.first<<" value is :"<<x.second<<endl;
    }
    map<string , int> m2;
    m2["raghav"]=70;
    m2["Harsh"]=10;
    m2["Sanket"]=52;
    for(auto x : m2)
    {
        cout<<x.first<<" :"<<x.second<<endl;//the output will be based on the ascii value of the alphabet increasing order
    }
}