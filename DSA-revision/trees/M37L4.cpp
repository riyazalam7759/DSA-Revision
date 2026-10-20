
//printing all the elements levelwise in reverse order right to left
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
    int left=1+levels(root->left);
    int right=1+levels(root->right);
    return max(left,right);
}

void printLevelWise(Node* root,int n,int level)
{
    if(root==NULL) return;
    if(n==level)
    {
         cout<<root->val<<" ";
         return;
    }
    printLevelWise(root->right,n+1, level);
    printLevelWise(root->left,n+1, level);
   
}
int main()
{
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    Node* f=new Node(60);
    Node* g=new Node(70);
    Node* h=new Node(80);
    Node* i=new Node(90);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    d->left=h;
    f->right=i;
    cout<<endl;
    int TotalNoOfLevels=levels(a);
    for(int i=1;i<=TotalNoOfLevels;i++)
    {
        printLevelWise(a,1,i);
        cout<<endl;
    }
}