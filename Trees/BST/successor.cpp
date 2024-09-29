#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
node* successor(node* root,node* p)
{
    node* successor=NULL;
    while(root!=NULL)
    {
        if(root->data > p->data)
        {
            successor=root;
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return successor;
}
int main()
{
   struct node *root=new node(8);
   root->left=new node(3);
   root->right=new node(10);
   root->left->left=new node(1);
   root->left->right=new node(6);
   root->right->right=new node(14);
   root->right->right->left=new node(18);
   node* p=new node(1);
   node* succ=successor(root,p);
   cout<<succ->data;
}