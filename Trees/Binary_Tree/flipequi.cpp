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
bool flipeq(struct node* root1,struct node* root2)
{
    if(root1==NULL && root2==NULL) return true;
    if(root1->data==root2->data) return true;
    if(root1==NULL && root2!=NULL) return false;
    if(root1!=NULL && root2==NULL) return false;
    return flipeq(root1->left,root2->right) && flipeq(root1->right,root2->left);
}
int main()
{
   struct node* root1=new node(1);
   root1->left=new node(2);
   root1->left->left=new node(4);
   root1->left->right=new node(5);
   root1->left->right->left=new node(7);
   root1->left->right->right=new node(8);
   root1->right=new node(3);
   root1->right->left=new node(6);
   struct node* root2=new node(1);
   root2->left=new node(3);
   root2->left->right=new node(6);
   root2->right=new node(2);
   root2->right->left=new node(4);
   root2->right->right=new node(5);
   root2->right->right->left=new node(8);
   root2->right->right->right=new node(7);
   cout<<flipeq(root1,root2);

}