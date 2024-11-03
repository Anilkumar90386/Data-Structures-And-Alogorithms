#include<bits/stdc++.h>
using namespace std;
void Breadth_First(int n,int node,vector<vector<int>>&adjL)
{
    int vis[n+1]={0};
    vis[1]=1;
    vector<int>bfs;
    queue<int>q;
    q.push(1);
    while(!q.empty())
    {
        int data=q.front();
        q.pop();
        bfs.push_back(data);
        for(auto it:adjL[data])
        {
            if(!vis[it])
            {
                vis[it]=1;
                q.push(it);
            }
        }
    }
    for(int i=0;i<bfs.size();i++)
    {
        cout<<bfs[i]<<" ";
    }
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adjL(n+1);
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adjL[u].push_back(v);
        adjL[v].push_back(u);
    }
    Breadth_First(n,1,adjL);
}