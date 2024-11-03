#include<bits/stdc++.h>
using namespace std;
void DFS(int node,vector<vector<int>>&adj,int vis[],vector<int>&dfs)
{
    vis[node]=1;
    dfs.push_back(node);
    for(auto it:adj[node])
    {
        if(!vis[it])
        {
            DFS(it,adj,vis,dfs);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1);
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int vis[n+1]={0};
    vector<int>dfs;
    DFS(1,adj,vis,dfs);
    for(auto it:dfs)
    {
        cout<<it<<" ";
    }
}