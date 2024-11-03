#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>>mat(n,vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    // int ans[n][m];
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         ans[j][n-1-i]=mat[i][j];
    //     }
    // }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<m;j++)
        {    
            swap(mat[i][j],mat[j][i]);   
        }
    }
    for(int i=0;i<n;i++)
    {
        reverse(mat[i].begin(),mat[i].end());
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}