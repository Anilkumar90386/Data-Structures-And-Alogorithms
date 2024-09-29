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
node* buildTree(struct node* root)
{
    cout<<"Enter the data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1) return NULL;
    cout<<"Enter the left data"<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the right data"<<endl;
    root->right=buildTree(root->right);
    return root;
}
void levelorder(struct node* root)
{
    queue<struct node*>q;
    q.push(root);
    while(!q.empty())
    {
        struct node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
}
int main()
{
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    struct node* root=NULL;
    root=buildTree(root);
    levelorder(root);
}