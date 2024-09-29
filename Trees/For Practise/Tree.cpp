#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
    node(int data1)
    {
        data = data1;
        left = right = NULL;
    }
};
void preorder(struct node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void Inorder(struct node *root)
{
    if (root == NULL)
        return;
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}
void levelorder(struct node *root)
{
    vector<vector<int>> ans;
    queue<struct node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        vector<int> ls;
        for (int i = 0; i < size; i++)
        {
            struct node *node = q.front();
            q.pop();
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
            ls.push_back(node->data);
        }
        ans.push_back(ls);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
int Maximum_depth(struct node* root)
{
    if(root==NULL) return 0;
    int ls=Maximum_depth(root->left);
    int rs=Maximum_depth(root->right);
    return 1+max(ls,rs);
}
int countLeaf(struct node* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    return countLeaf(root->left)+countLeaf(root->right);
}
int countNodes(struct node* root)
{
    if(root==NULL) return 0;
    int l=countNodes(root->left);
    int r=countNodes(root->right);
    return 1+l+r;
}
int height(struct node* root)
{
    if(root==NULL) return 0;
    int l=height(root->left);
    int r=height(root->right);
    return 1+max(l,r);
}
bool balanced(struct node* root)
{
    if(root==NULL) return 0;
    if(height(root->left)-height(root->right)<=1) return true;
    else return false;
}
int diameter(struct node* root,int maxi)
{
    if(root==NULL) return 0;
    int lh=diameter(root->left,maxi);
    int rh=diameter(root->right,maxi);
    maxi=max(maxi,lh+rh);
    return 1+max(lh,rh);
}
int Pathsum(struct node* root,int &maxi)
    {
        if(root==NULL) return 0;
        int left=max(0,Pathsum(root->left,maxi));
        int right=max(0,Pathsum(root->right,maxi));
        maxi = max(maxi,  left + right+root->data);
        return max(left,right)+root->data;
       
    }
bool isSame(struct node* r1,struct node* r2)
{
    if(r1==NULL || r2==NULL) return (r1==r2);
    return  isSame(r1->left,r2->left) && isSame(r1->right,r2->right) && r1->data==r2->data ;
}
void zigzagTraversal(struct node* root)
{
    vector<vector<int>>ans;
    if(root==NULL) return;
    queue<struct node*>q;
    bool leftToright=true;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        vector<int>list(size);
        for(int i=0;i<size;i++)
        {
            struct node* node=q.front();
            q.pop();
            int ind=(leftToright) ? i : size-i-1;
            list[ind]=node->data;
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
        }
        ans.push_back(list);
        leftToright=!leftToright;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
bool isLeaf(node* root) {
    return !root->left && !root->right;
}
void addLeft(node* root, vector<int>& res) {
    node* curr = root->left;
    while (curr) {
        if (!isLeaf(curr)) res.push_back(curr->data);
        if (curr->left) curr = curr->left;
        else curr = curr->right;
    }
}
void addRight(node* root, vector<int>& res) {
    node* curr = root->right;
    vector<int> temp;
    while (curr) {
        if (!isLeaf(curr)) temp.push_back(curr->data);
        if (curr->right) curr = curr->right;
        else curr = curr->left;
    }
    for (int i = temp.size() - 1; i >= 0; i--) {
        res.push_back(temp[i]);
    }
}
void addLeaf(node* root, vector<int>& res) {
    if (isLeaf(root)) {
        res.push_back(root->data);
        return;
    }
    if (root->left) addLeaf(root->left, res);
    if (root->right) addLeaf(root->right, res);
}
void VerticalOrder(node* root)
{
    map<int,map<int,multiset<int>>>nodes;
    queue<pair<node*,pair<int,int>>>q;
    q.push({root,{0,0}});
    while(!q.empty())
    {
        auto p=q.front();
        q.pop();
        node* node=p.first;
        int x=p.second.first,y=p.second.second;
        nodes[x][y].insert(node->data);
        if(node->left) q.push({node->left,{x-1,y+1}});
        if(node->right) q.push({node->right,{x+1,y+1}});
    }
    vector<vector<int>>ans;
    for(auto p:nodes)
    {
        vector<int>col;
        for(auto q:p.second)
        {
            col.insert(col.end(),q.second.begin(),q.second.end());
        }
        ans.push_back(col);
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
void RightView(node* root,int level,vector<int>&ds)
{
    if(root==NULL)return;
    if(level==ds.size()) ds.push_back(root->data);
    RightView(root->right,level+1,ds);
    RightView(root->left,level+1,ds);
}
void LeftView(node* root,int level,vector<int>&ds)
{
    if(root==NULL)return;
    if(level==ds.size()) ds.push_back(root->data);
    LeftView(root->left,level+1,ds);
    LeftView(root->right,level+1,ds);   
}
void sum_root_to_leaf(node* root,int len,int &maxLen,int &maxSum,int sum)
{
      if(root==NULL)
      {
         if(len>maxLen)
         {
            maxLen=len;
            maxSum=sum;
         }
         else{
            maxSum=max(maxSum,sum);
         }
      }
      sum=sum+root->data;
      sum_root_to_leaf(root->left,len+1,maxLen,maxSum,sum);
      sum_root_to_leaf(root->right,len+1,maxLen,maxSum,sum);
}
int main() {
    node* r1 = new node(1);
    r1->left = new node(2);
    r1->right = new node(3);
    r1->left->left = new node(4);
    r1->left->right = new node(6);
    r1->right->left = new node(6);
    r1->right->right = new node(7);
    int maxi=0;
    diameter(r1,maxi);
    cout<<maxi;
}