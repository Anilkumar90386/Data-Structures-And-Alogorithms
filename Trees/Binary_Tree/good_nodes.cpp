#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;
    node(int val) {
        data = val;
        left = right = nullptr;
    }
};

void good_node(node* root,int &count)
{
  
}
int main() {
    node *root = new node(1);
    root->left = new node(3);
    root->right = new node(2);
    root->left->left = new node(5);
    root->left->right = new node(4);
    root->right->left = new node(7);
    root->right->right = new node(8);
    int count=1;
    good_node(root,count);
    cout<<count;
    return 0;
}
