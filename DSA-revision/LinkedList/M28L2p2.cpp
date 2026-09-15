
//adding constructor to the formed linked list 
#include <iostream>
using namespace std;
class Node{//this is proper Linked list node
    public:
        int val;
        Node* next;
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
};
int main()
{
    //10 , 20 , 30 , 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    cout<<a.val<<endl;//=>10
   
    //forming linked list 
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;
    Node*ptr=&b;
    cout<<(*ptr).val<<endl;//=>20
    (*ptr).val=200;//or we can write like ptr->val=200
    cout<<(*ptr).val<<endl;//=>200
    cout<<(*(c.next)).val<<endl;//=>40
    cout<<c.next->val<<endl;//=>40
    c.next->val=400;
    cout<<d.val<<endl;//=>400
    cout<<(((a.next)->next)->next)->val;//=>400
}

