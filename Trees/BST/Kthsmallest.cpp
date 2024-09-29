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
void findsmallest(node* root, int& result, int k, int& cnt) {
    if (root == NULL || cnt > k) return;
    findsmallest(root->left, result, k, cnt);
    cnt++;
    if (cnt == k) {
        result = root->data;
        return;
    }
    findsmallest(root->right, result, k, cnt);
}

int Inorder(node* root, int k) {
    int cnt = 0;
    int result = -1;
    findsmallest(root, result, k, cnt);
    return result;
}
int main()
{
   struct node *root=new node(8);
   root->left=new node(3);
   root->right=new node(10);
   root->left->left=new node(1);
   root->left->right=new node(6);
   root->right->right=new node(14);
   root->right->right->left=new node(18);
   cout<<Inorder(root,3);
   
}