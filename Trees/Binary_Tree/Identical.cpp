#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int val)
    {
        val=data;
        left=right=NULL;
    }
};
bool Identical(struct node* p,struct node* q)
{

    if(p==NULL && q==NULL) return (p==q);
    return Identical(p->left,q->left) && Identical(p->right,q->right);
}
int main()
{
    struct node *root=new node(1);
    root->left=new node(3);
    root->right=new node(2);
    root->left->left=new node(5);
    root->left->right=new node(4);
    root->right->left->left=new node(7);
    root->right->left->right=new node(7);
     struct node *Node=new node(1);
    Node->left=new node(3);
    Node->right=new node(2);
    Node->left->left=new node(5);
    Node->left->right=new node(4);
   Node->right->left->left=new node(7);
    Node->right->left->right=new node(7);
    cout<<Identical(root,Node);
}