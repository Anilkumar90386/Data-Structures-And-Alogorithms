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
void preorder(node *root)
{
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node *root)
{
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node *root)
{
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void levelorder(node* root)
{
    vector<vector<int>>ans;
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        vector<int>lvl;
        for(int i=0;i<size;i++)
        {
            node* node=q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            lvl.push_back(node->data);
        }
        ans.push_back(lvl);
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
int maximum_depth(node* root)
{
    if(root==NULL) return 0;
    int l=maximum_depth(root->left);
    int r=maximum_depth(root->right);
    return 1+max(l,r);
}
int diameter(node* root,int &maxi)
{
    if(root==NULL) return 0;
    int l=diameter(root->left,maxi);
    int r=diameter(root->right,maxi);
    maxi=max(maxi,l+r);
    return 1+max(l,r);
}
int countNodes(node* root)
{
    if(root==NULL) return 0;
    return 1+countNodes(root->left)+countNodes(root->right);
}
int LeafNodes(node* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    return LeafNodes(root->left)+LeafNodes(root->right);
}
int path_sum(node* root,int &maxi)
{
    if(root==NULL) return 0;
    int l=path_sum(root->left,maxi);
    int r=path_sum(root->right,maxi);
    maxi=max(maxi,l+r+root->data);
    return root->data+max(l,r);
}
bool Balanced(node* root)
{
    if(root==NULL) return true;
    if(maximum_depth(root->left)-maximum_depth(root->right)<=1) return true;
    return false;
}
bool Identical(node* p,node* q)
{
    if(p==NULL || q==NULL) return (p==q);
    return p->data==q->data && Identical(p->left,q->left) && Identical(p->right,q->right);
}
void ZigZag(node* root)
{
    vector<vector<int>>ans;
    queue<node*>q;
    q.push(root);
    bool flag=true;
    while(!q.empty())
    {
        int size=q.size();
        vector<int>lvl(size);
        for(int i=0;i<size;i++)
        {
            node* node=q.front();
            q.pop();
            int ind=flag ? i : size-i-1;
            lvl[ind]=node->data;
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        flag=!flag;
        ans.push_back(lvl);
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
void Iterative_pre(node* root)
{
    if(root==NULL) return;
    stack<node*>st;
    st.push(root);
    vector<int>pre;
    while(!st.empty())
    {
        node* node=st.top();
        st.pop();
        if(node->right) st.push(node->right);
        if(node->left) st.push(node->left);
        pre.push_back(node->data);   
    }
    for(auto it:pre)
    {
        cout<<it<<" ";
    }
}
void Iterative_In(node* root)
{
    stack<node*>st;
    st.push(root);
    node* node=root;
    vector<int>in;
    while(true)
    {
        if(node!=NULL)
        {
            st.push(node);
            node=node->left;
        }
        else{
            if(st.empty()==true) break;
            node=st.top();
            st.pop();
            in.push_back(node->data);
            node=node->right;
        }
    }
    for(auto it:in)
    {
        cout<<it<<" ";
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
void BoundaryTraversal(node* root)
{
    vector<int>res;
    if(!isLeaf(root)) res.push_back(root->data);
    addLeft(root,res);
    addLeaf(root,res);
    addRight(root,res);
    for(auto it:res)
    {
        cout<<it<<" ";
    }
}
void Invert(node* root)
{
    if(root==NULL) return ;
    swap(root->left,root->right);
    Invert(root->left);
    Invert(root->right);
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
void LeftView(node* root,int level,vector<int>&ds)
{
    if(root==NULL) return;
    if(ds.size()==level) ds.push_back(root->data);
    LeftView(root->left,level+1,ds);
    LeftView(root->right,level+1,ds);
}
void RightView(node* root,int level,vector<int>&ds)
{
    if(root==NULL) return;
    if(ds.size()==level) ds.push_back(root->data);
    RightView(root->right,level+1,ds);
    RightView(root->left,level+1,ds);
}
bool Symmetric(node* r1,node* r2)
{
    if(r1==NULL || r2==NULL) return (r1==r2);
    return r1->data==r2->data && Symmetric(r1->left,r2->right) && Symmetric(r1->right,r2->left);
}
int main()
{
    node* r1 = new node(1);
    r1->left = new node(2);
    r1->right = new node(2);
    r1->left->left = new node(4);
    r1->left->right = new node(5); 
}