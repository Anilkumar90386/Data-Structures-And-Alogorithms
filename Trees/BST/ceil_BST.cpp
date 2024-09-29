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
    int ceil=-1;
    while(root)
    {
        if(root->data==val)
        {
            ceil=root->data;
            return ceil;
        }
        else if(val > root->data)
        {
            root=root->left;
        }
        else{
            ceil=root->data;
            root=root->right;
        }
    }
    return ceil;
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
   cout<<f(root,val);
   
}