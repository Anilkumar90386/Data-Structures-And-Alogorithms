#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(m+1,vector<int>(n+1,0));
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
             adj[u][v]=1;
             adj[v][u]=1;
       
    }
    for(int i1=0;i1<m;i1++)
    {
        for(int j1=0;j1<n;j1++)
        {
            cout<<adj[i1][j1]<<" ";
        }
        cout<<endl;
    }
    return 0;
}