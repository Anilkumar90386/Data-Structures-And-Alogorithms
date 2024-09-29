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
void preorder(struct node* root)
{
    vector<int>ans;
    if(root==NULL) return ans;
    stack<struct node*>st;
    st.push(root);
    while(!st.empty())
    {
        struct node* node=st.top();
        st.pop();
        ans.push_back(root->data);
         if(node->right!=NULL) st.push(node->right);
        if(node->left!=NULL) st.push(node->left);
       
    }
    return ans;
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
    preorder(root);
}