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
// node* buildTree(struct node* root)
// {
//     int data;
//     cin>>data;
//     root=new node(data);
//     if(data==-1) return NULL;
//     root->left=buildTree(root->left);
//     root->right=buildTree(root->right);
//     return root;
// }
void level(node* root)
{
    queue<node*>q;
    q.push(root); 
     vector<double>lvl;
    while(!q.empty())
    {
        int size=q.size();
        double avg=0;
        double sum=0;
        for(int i=0;i<size;i++)
        {
            node* node=q.front();
            q.pop();
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
            sum=sum+node->data;
        }
        avg=sum/size;
        lvl.push_back(avg);
    }
    for(int i=0;i<lvl.size();i++)
    {
        cout<<lvl[i]<<" ";
    }
 
}
int main()
{
    //1 2 -1 -1 3 -1 -1
    struct node* root=new node(3);
    root->left=new node(9);
    root->right=new node(20);
    root->right->left=new node(15);
    root->right->right=new node(7);
    level(root);
    
}