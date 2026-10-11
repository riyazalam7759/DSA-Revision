//finding levels of the tree
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
int levels(Node* root)
{
    if(root==NULL) return 0;
    int leftH=1+levels(root->left);
    int rightH=1+levels(root->right);
    return max(leftH , rightH); 
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
    Node* h=new Node(800);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    d->left=h;
    cout<<"height of tree is :"<<levels(a);
   
}