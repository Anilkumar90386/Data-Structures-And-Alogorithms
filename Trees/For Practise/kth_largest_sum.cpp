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
void levelsum(node* root,vector<int>&ans)
{
     queue<node*>q;
     q.push(root);
     while(!q.empty())
     {
        int size=q.size();
        int sum=0;
        for(int i=0;i<size;i++)
        {
            node* node=q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            sum+=node->data;
        }
        ans.push_back(sum);
     }
}
int main()
{
     node* root=new node(5);
     root->left=new node(8);
     root->right=new node(9);
     root->left->left=new node(2);
     root->left->right=new node(1);
    //  root->left->left->left=new node(4);
    //  root->left->left->right=new node(6);
     root->right->left=new node(3);
     root->right->right=new node(7);
     vector<int>ans;
     int k;
     cin>>k;
     levelsum(root,ans);
    sort(ans.begin(),ans.end());
    if(k>ans.size()) cout<<-1;
    cout<<ans[k];
}