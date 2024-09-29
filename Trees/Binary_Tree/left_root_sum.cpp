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
int root_sum(struct node* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return root->data;
    return root_sum(root->left)+root_sum(root->right);  
}
int main()
{
    struct node *root=new node(1);
    root->left=new node(3);
    root->right=new node(2);
    root->left->left=new node(5);
    root->left->right=new node(3);
    root->right->right=new node(9);
   cout<<root_sum(root);
   
}