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
int Count(struct node* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL)return 1;
    return Count(root->left)+Count(root->right);
}
int main()  
{
    /*
             

     */
    struct node *root=new node(1);
    root->left=new node(3);
    root->right=new node(2);
    root->left->left=new node(5);
    root->left->right=new node(4);
    root->right->left->left=new node(7);
    root->right->left->right=new node(7);
    cout<<Count(root);
}