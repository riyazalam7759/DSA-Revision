//levelwise printing all the elements of the binary tree using queue 
#include<iostream>
#include<queue>
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
void levelOrderQueue(Node* root)//this technique is known as BFS
{
    queue<Node*> q;
    q.push(root);
    while(q.size()>0)
    {
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }
    cout<<endl;
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

    levelOrderQueue(a);
    cout<<endl;
}