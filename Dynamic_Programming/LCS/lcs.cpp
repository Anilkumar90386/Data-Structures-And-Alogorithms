#include<bits/stdc++.h>
using namespace std;
/*
 int f(int ind1,int ind2,string text1, string text2,vector<vector<int>>&dp)
    {
        if(ind1<0 || ind2<0) return 0;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];   //Recursion and Memorization
        if(text1[ind1]==text2[ind2]) return dp[ind1][ind2]=1+f(ind1-1,ind2-1,text1,text2,dp);  
        return dp[ind1][ind2]=max(f(ind1-1,ind2,text1,text2,dp),f(ind1,ind2-1,text1,text2,dp));
    }
*/
int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int j=0;j<=m-1;j++) dp[0][j]=0;
        for(int i=0;i<=n-1;i++) dp[i][0]=0;   //Tabulation
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(text1[i-1]==text2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<longestCommonSubsequence(s1,s2);
}