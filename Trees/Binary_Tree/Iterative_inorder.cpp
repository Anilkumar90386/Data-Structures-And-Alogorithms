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
void preorder( node* root)
{
    stack<node*>st; 
    vector<int>ans;
    st.push(root);
    while(true)
    ~{
        if(root!=NULL)
        {
            st.push(root);
            root=root->left;
        }
        else{
            node* node=st.top();
            st.pop();
            ans.push_back(node->data);
            root=root->right;
        }
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