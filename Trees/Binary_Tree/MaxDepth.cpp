#include<bits/stdc++.h>
#include "structurecpp.h"
using namespace std;
int MaxDepth(struct node* root)
{
    if(root==NULL) return 0;
    int l=MaxDepth(root->left);
    int r=MaxDepth(root->right);
    return 1+max(l,r);
}
int main()
{
    struct node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<MaxDepth(root);
}