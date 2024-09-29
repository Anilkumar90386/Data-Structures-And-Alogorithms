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
int f(struct node* root,int val)
{
    while(root!=NULL && root->data!=val)
    {
       root=val<root->data ? root->left : root->right;
    }
    bool res= root->data==val ? true:false;
    return res;
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
   int val;
   cin>>val;
   cout<<f(root,10);
   
}