#include <bits/stdc++.h>
#include "structurecpp.h"
using namespace std;
void right_view(struct node *root, int level, vector<int> &ans)
{

    if (root == NULL)
        return;
    if (level == ans.size())
        ans.push_back(root->data);
    right_view(root->right, level + 1, ans);
    right_view(root->left, level + 1, ans);
}
int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    vector<int> ans;
    right_view(root, 0, ans);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}