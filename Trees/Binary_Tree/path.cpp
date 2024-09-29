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
bool path(node* root, vector<int>& res,vector<vector<int>>&ans) {
    if (root == NULL) return false;   
    res.push_back(root->data);
    path(root->left,res,ans);
    path(root->right,res,ans);
    if ((root->left==NULL && root->right==NULL)) {
        ans.push_back(res);
        res.pop_back();
        return true;
    }
    res.pop_back();
    return false;
}
int main()
{
    struct node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    vector<int> res;
    vector<vector<int>>ans;
    path(root,res,ans);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
   
}