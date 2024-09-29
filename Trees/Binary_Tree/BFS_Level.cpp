#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*left;
    struct node*right;
    node(int val)
    {
        data=val;
    }
};
vector<int> level_order(struct node* root)
{
    vector<int>ans;
    if(!root) return ans;
    queue<struct node*>q;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        int maxi=INT_MIN;
        for(int i=0;i<size;i++)
        {
            struct node *temp=q.front();
            q.pop();
            maxi=max(maxi,temp->data);            
            if(temp->left)q.push(temp->left);
            if(temp->right) q.push(temp->right);
            
        }
        ans.push_back(maxi);
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
    vector<int>ans= level_order(root);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}