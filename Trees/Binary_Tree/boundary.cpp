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
int addLeft(struct node* root,vector<int>&res)
{
     struct node* cur=root;
     while(cur)
     {
        if(!isLeaf(cur)) res.push_back(cur->data);
        if(cur->left) cur=cur->left;
        else cur=cur->right;
     }
}
int addLeaves(struct node* root,vector<int>&res)
{
    struct node* cur=root;
    
    if(isLeaf(cur)) res.push_back(cur->data);
    if(cur->left) addLeaves(root->left,res);
    else addLeaves(cur->right,res);
}
int addright(struct node* root,vector<int>&res)
{
     struct node* cur=root;
     vector<int>temp; 
     while(cur)
     {
        if(!isLeaf(cur)) temp.push_back(cur->data)
        if(cur->left) cur=cur->left;
        if(cur->right) cur=cur->right; 
     }
     for(int i=temp.size();i>=0;i--)
     {
        res.pus_back(temp[i]);
     }
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
    
}