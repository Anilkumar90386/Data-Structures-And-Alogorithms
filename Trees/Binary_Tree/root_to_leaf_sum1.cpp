#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
bool sum(node* root,int &res,int sum1)
{
    if(root==NULL) return false;
    sum1=sum1*10+root->data;
    sum(root->left,res,sum1);
    sum(root->right,res,sum1);
    if(root->left==NULL && root->right==NULL)
    {
        
    }
    
    return false;
}
int main()
{
    struct node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    int res=0;;
    sum(root,res,0);
    cout<<sum1;
}