#include<bits/stdc++.h>
using namespace std;
int f(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp)
{
    if(i==0 && j==0) return grid[i][j];
    if(i<0 || j<0) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    int left=grid[i][j]*f(i,j-1,grid,dp);
    int top=grid[i][j]*f(i-1,j,grid,dp);
    dp[i][j]=max(top,left);
    return 0;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>grid(n,vector<int>(m));
    vector<vector<int>>dp(n,vector<int>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    f(n-1,m-1,grid,dp);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

//     int ans=0;
//    f(n-1,m-1,grid,ans);
//     if(ans<0)
//     {
//         cout<<-1;
//     }
//     else{
//         cout<<ans;
//     }
//     return 0;
}