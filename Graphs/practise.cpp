#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    // vector<vector<int>>adj(m+1,vector<int>(n+1,0));
    // for(int i=0;i<m;i++)
    // {
    //     int u,v;
    //     cin>>u>>v;
    //     adj[u][v]=1;
    //     adj[v][u]=1;
    // }
    // for(int i=0;i<m;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<adj[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<vector<int>>adjList(n+1);
    for(int i=0;i<m;i++)
    {
         int u,v;
         cin>>u>>v;
         adjList[u].push_back(v);
         adjList[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"->";
        for(auto it:adjList[i])
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}