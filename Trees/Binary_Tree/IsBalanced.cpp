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
int height(strct node* root)
{
    if(root==NULL) return 0;
    int l=height(root->left);
    int r=height(root->right);
    int ans=max(l,r)+1;
    return ans;
}
bool IsBalanced(struct node* root)
{
    if(root==NULL) return true;
    bool l=IsBalanced(root->left);
    bool r=IsBalanced(root->right);
    bool diff=abs(height(root->left)-height(root->left))<=1;
    if(l && r && diff) return true;
    return false;
   
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
    cout<<IsBalanced(root);
}