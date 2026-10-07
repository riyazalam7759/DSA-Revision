
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> m;//maps contain key along with value this is also called as pair class
    //first way to insert key and value in the map 
    pair<string,int> p1;
    p1.first="Riyaz";
    p1.second=6;
   
    pair<string,int> p2;
    p2.first="Janishar";
    p2.second=66;
   
    pair<string,int> p3;
    p3.first="Faiz";
    p3.second=77;
    
    //second way to insert keys and values in the map 
     m.insert(p1);
     m.insert(p2);
     m.insert(p3);
     for(pair<string,int> p: m)//we can also write "auto" in place of pair<string,int>
     {
        cout<<p.first<<" has Roll No :-"<<p.second<<endl; 
     }

     unordered_map<string,int> m2;
     m2["Ryz"]=60;
     m2["Jan"]=660;
     m2["Fyz"]=770;
     for(auto p : m2 )
     {
        cout<<p.first<<" has Roll No :-"<<p.second<<endl;
     }
     m2.erase("Fyz");//deleted the Fyz also its value will be deleted 
     //to delete the data you just have to give the only key 
     for(auto p : m2 )
     {
        cout<<p.first<<" has Roll No :-"<<p.second<<endl;
     }
    cout<<m2.size()<<endl;//=>2 give the size of the map 
   //time complexity of insertion , deletion and searching is O(1)
   if(m2.find("fyz") != m2.end())
   {
    cout<<"present";
   }
   else cout<<"not present";
}