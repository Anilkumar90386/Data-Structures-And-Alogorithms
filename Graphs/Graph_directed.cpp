#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>arr[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        arr[u].push_back(v);
    }
    return 0;
}