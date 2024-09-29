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
vector<int> levelorder(struct node* root)
{
    vector<int>ans;
    int maxi=0;
    if(root==NULL) return ans;
    queue<struct node*>q;
    q.push(root);
    while(!q.empty())
    {
        struct node* temp=q.front();
        q.pop();
        if(temp->left)
        {        
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
    return ans;
}
int main()
{
    struct node *root=new node(1);
    root->left=new node(3);
    root->right=new node(2);
    root->left->left=new node(5);
    root->left->right=new node(3);
    root->right->right=new node(9);
    vector<int>ans=levelorder(root);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}