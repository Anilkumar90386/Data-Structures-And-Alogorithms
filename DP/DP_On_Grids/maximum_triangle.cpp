#include<bits/stdc++.h>
using namespace std;
int maxSum(int i,int j,int n,vector<vector<int>>&triangle,vector<vector<int>>&dp)
{
     if(i==n-1) return triangle[i][j];
     if(dp[i][j]!=-1) return dp[i][j];
     int d=triangle[i][j]+maxSum(i+1,j,n,triangle,dp);    
     int dg=triangle[i][j]+maxSum(i+1,j+1,n,triangle,dp);
     return dp[i][j]=min(d,dg);

}
int maximumpathsum(vector<vector<int>>&triangle,int n)
{
    vector<vector<int>>dp(n,vector<int>(n));
    for(int j=0;j<n;j++)
    {
        dp[n-1][j]=triangle[n-1][j];  
    }   
    for(int i=n-2;i>=0;i--)
    {
        for(int j=i;j>=0;j--)
        {
            int d=triangle[i][j]+dp[i+1][j];
            int dg=triangle[i][j]+dp[i+1][j+1];
            dp[i][j]=min(d,dg);
        }
    }
    return dp[0][0];
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>triangle(n);
    for(int i=0;i<n;i++)
    {
        triangle[i].resize(i+1);
        for(int j=0;j<=i;j++)
        {
            cin>>triangle[i][j];
        }
    }
   int res=maximumpathsum(triangle,n);
   cout<<res;
}