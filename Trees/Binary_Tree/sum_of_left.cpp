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
void sum_of_left_leaves(node* root,int &sum)
{
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) sum=sum+root->data;
    sum_of_left_leaves(root->left,sum);
    sum_of_left_leaves(root->right,sum);
}
int main()
{
      node* root=new node(3);
      root->left=new node(9);
      root->right=new node(20);
      root->right->left=new node(15);
      root->right->right=new node(7);
      int sum=0;
      sum_of_left_leaves(root,sum);
      cout<<sum;
}