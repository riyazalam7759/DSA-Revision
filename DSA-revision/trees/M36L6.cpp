//finding node with maximum value 
#include<climits>
#include<iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* left ;
    Node* right;
    Node(int val)
    {
       this->left=NULL;
       this-> right=NULL;
       this->val=val;   
    }
};
int maxVal(Node* root)
{
    if(root == NULL) return INT_MIN;//we cant give 0 here cause of negative numbers 
    //for all positive numbers we can give 0 but it wont work for all negative numbers
    int leftMax=max(root->val,maxVal(root->left));
    int rightMax=max(root->val,maxVal(root->right));
    return max(leftMax,rightMax);
}

int main()
{
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(0);
    Node* d=new Node(40);
    Node* e=new Node(80);
    Node* f=new Node(60);
    Node* g=new Node(70);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    cout<<"max value is :"<<maxVal(a);
   
}