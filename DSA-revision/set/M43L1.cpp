//basic of sets
#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    //set store unique elements only duplicate element wont be pushed inside the set
    //if you push duplicate elements then that element will be printed only once 
    //and the size wont be affected by duplicate value 
    //here below size will be 6
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(50);
    s.insert(40);
    s.insert(35);
    s.insert(11);
    s.insert(11);
   
    for(int ele : s )
    {
        cout<<ele<<" ";//=> 11 , 35 , 40 , 50 , 20 10
    }
    s.erase(20);//20 will be deleted 

     int target=14;
     if(s.find(target) != s.end())//target exist  //s.find(target) != s.end() =>target doesnt exist
         cout<<"target exist"<<endl;
     else cout<<"target doesnt exist"<<endl;


    /*
    s.insert(x)
    s.erase(x)
    s.size()
    s.find(x)
    s.begin()
    s.end()
    */
    //all the operations will heppens in time complexity of O(1)
     //all the elements will be stored in random order
    //we will use for each loop to print all the elements in the set
    
}