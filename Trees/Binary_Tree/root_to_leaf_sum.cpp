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
node* buildTree(struct node* root)
{
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1) return NULL;
    root->left=buildTree(root->left);
    root->right=buildTree(root->right);
    return root;
}
int sum(struct node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=(root->data)*10+sum(root->left);
    int r=(root->data)*10+sum(root->right);
    return l+r;
}
int main()
{
    //1 2 -1 -1 3 -1 -1
    struct node* root=NULL;
    root=buildTree(root);
    cout<<sum(root);
    
}