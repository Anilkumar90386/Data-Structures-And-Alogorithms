#include<bits/stdc++.h>
using namespace std;
int f(int i,int j,vector<vector<int>>mat)
{
    if(i==0 && j==0) return 0;
    if(i<0 || j<0) return 0;
    int up=mat[i][j]+f(i-1,j,mat);
    int left=mat[i][j]+f(i,j-1,mat);
    return min(up,left);
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
    cout<<f(m-1,n-1,mat);
}