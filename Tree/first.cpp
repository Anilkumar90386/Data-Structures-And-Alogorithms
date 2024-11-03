#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*  left;
    struct node* right;
    node(int val)
    {
        data=val;
        left=right=nullptr;
    }
};
void preorder(node* root)
{
    if(root==NULL) return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right); 
}
void inorder(node* root)
{
    if(root==NULL) return ;
    inorder(root->left);
     cout<<root->data<<" ";
    inorder(root->right); 
}
void postorder(node* root)
{
    if(root==NULL) return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void level_order(node* root)
{
    queue<node*>q;
    q.push(root);
    vector<vector<int>>ans;
    while(!q.empty())
    {
        int size=q.size();
        vector<int>lvl;
        for(int i=0;i<size;i++)
        {
            node* node=q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            lvl.push_back(node->data);
        }
        ans.push_back(lvl);
    }
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int maximum_depth(node* root)
{
    if(root==NULL) return 0;
    int l=maximum_depth(root->left);
    int r=maximum_depth(root->right);
    return 1+max(l,r);
}
bool balanced(node* root)
{
    if(root==NULL) return true;
    if(maximum_depth(root->left)-maximum_depth(root->right)<=1) return true;
    return false;
}
int diameter(node* root,int &maxi)
{
    if(root==NULL) return 0;
    int l=diameter(root->left,maxi);
    int r=diameter(root->right,maxi);
    maxi=max(maxi,l+r);
    return 1+max(l,r);
}
int maximum_path_sum(node* root,int &maxi)
{
    if(root==NULL) return 0;
    int l=maximum_path_sum(root->left,maxi);
    int r=maximum_path_sum(root->right,maxi);
    maxi=max(maxi,l+r+root->data);
    return root->data+max(l,r);
}
bool identical(node* root1,node* root2)
{
    if(root1==NULL && root2==NULL) return true;
    return (root1->data==root2->data) &&identical(root1->left,root2->left) && identical(root1->right,root2->right);
}
void zig_zag(node* root)
{
    queue<node*>q;
    q.push(root);
    vector<vector<int>>ans;
    bool flag=true;
    while(!q.empty())
    {
        int size=q.size();
        vector<int> lvl(size);
        for(int i=0;i<size;i++)
        {
            node* node=q.front();
            q.pop();
            int index= flag ? i :size-1-i;
            lvl[index]=node->data;
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        flag=!flag;
        ans.push_back(lvl);
    }
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
   node* root=new node(1);
   root->left=new node(2);
   root->right=new node(3);
   root->left->left=new node(4);
   root->left->right=new node(5);
   root->right->left=new node(6);
   root->right->right=new node(7);
   
  zig_zag(root);
  
}