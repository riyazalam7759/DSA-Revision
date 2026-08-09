#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> v;//you need not to mention size
    v.push_back(1);//v[0]=1; => cant do this way at staring like arrays for inserting element 
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v[1]=20;//but now we can do this
 
    cout<<v[2]<<endl;
    cout<<v[1]<<endl;//now this will give 20

    vector<int> v2;
    v2.push_back(10);
    v2[1]=20;//this wont work only push_back will work
    v2.push_back(30);
    v2.push_back(40);
    cout<<v2[0]<<" ";//only value will be printed which are inserted by pus_back()
    cout<<v2[1]<<" ";//in v2[10] contain 30 value 
    cout<<v2[2]<<" ";//and atlast there will be 0 
    cout<<v2[3]<<" ";//cause whenever the box formed the default value is zero 0






}

