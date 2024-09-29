#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data=val;
        left=right=nullptr;
    }
};
vector<int> preorder(node* root)
{
    vector<int>ans;
    stack<node*>st;
    st.push(root);
    while(!st.empty())
    {
        node* node=st.top();
        st.pop();
        if(node->right) st.push(node->right);
        if(node->left) st.push(node->left);
        ans.push_back(node->data);
    }
    return ans;
}
// void pre(node* root)
// {
//     if(root==NULL) return ;
//     cout<<root->data<<" ";
//     pre(root->left);
//     pre(root->right);
// }
int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    // vector<int>ans=preorder(root);
    
    // for(auto it:ans)
    // {
    //     cout<<it<<" ";
    // }
    pre(root);
}