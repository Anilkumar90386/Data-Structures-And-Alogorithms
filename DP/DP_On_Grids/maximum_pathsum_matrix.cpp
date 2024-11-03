#include<bits/stdc++.h>
using namespace std;
int maxSum(int i,int j,int n,int m,vector<vector<int>>&mat)
{
    if(j<0|| j>=m) return -1e9;
    if(i==0) return mat[0][j];
    int d=mat[i][j]+maxSum(i-1,j,n,m,mat);
    int dg=mat[i][j]+maxSum(i-1,j-1,n,m,mat);
    int right=mat[i][j]+maxSum(i-1,j+1,n,m,mat);
    return max(d,max(dg,right));
}
int maximumPathSum(vector<vector<int>>&mat,int n,int m)
{
    int res=-1e8;
     for(int j=0;j<n;j++)
     {
        res=max(res,maxSum(n-1,j,n,m,mat));
     }
     return res;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    int res=maximumPathSum(mat,n,m);
    cout<<res;
}