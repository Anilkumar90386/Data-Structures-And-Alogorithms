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
node* lca(node* root,node* p,node* q)
{
   if(root==NULL) return 0;
   int curr=root->data;
   if(curr<p->data && curr<q->data)
   {
     lca(root->right,p,q);
   }
   if(curr>p->data && curr>q->data)
   {
     lca(root->left,p,q);
   }
   return root;
}
int main()
{
    struct node *r1=new node(10);
    r1->left=new node(4);
    r1->right=new node(13);
    r1->left->left=new node(3);
    r1->left->right=new node(8);
    r1->right->right=new node(15);
    node* p=new node(3);
    node* q=new node(8);
   node* ancesstor=lca(r1,p,q);
   cout<<ancesstor->data; 
} 