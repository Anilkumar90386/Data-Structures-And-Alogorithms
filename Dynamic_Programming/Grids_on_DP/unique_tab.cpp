#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>m>>n;
    int dp[m][n];
    dp[0][0]=1;
    int top,left;
    for(int i=0;i<m-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(i==0 && j==0) dp[i][j]=0;
            else{
                left=0,top=0;
                 left=dp[i][j-1];
                 top=dp[i-1][j];
                 return dp[i][j]=left+top; 
            }
              
        }
    }
    cout<<dp[m-1][n-1];
}