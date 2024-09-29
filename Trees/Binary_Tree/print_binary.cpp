#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
node* insert(node* root,int val)
{
    if(!root) return new root(val);
    if(val<root->val)
    {
        root->left=new node(root->left,val);
    }
    else{
        root->right=new node(root->right,val);
    }
    return root;
}
node* create(vector<int>values)
{
    node* root=NULL;
    for(auto val:values)
    {
        root=insert(root,val);
    }
    return root;
}
int main()
{
    
}