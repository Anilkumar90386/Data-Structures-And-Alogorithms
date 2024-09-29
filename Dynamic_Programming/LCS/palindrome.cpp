#include<bits/stdc++.h>
using namespace std;
string palindromic(int i,int j,string s,string t)
{
 
    int n=s.size();
    int m=t.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
  for(int i=0;i<=n;i++) dp[i][0]=0;
  for(int j=0;j<=m;j++) dp[0][j]=0;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++)=
    {
      if(s[i-1]==t[j-1])
      {
        dp[i][j]=1+dp[i-1][j-1];
      }
      else{
        dp[i][j]=0;
      }
    }
  }
  string ans="";
  i=n-1,j=m-1;
  while(i>0 && j>0)
  {
    if(s[i-1]==t[j-1])
    {
       ans+=s[i-1];
       i--,j--;
    }
    else if(dp[i-1][j]>dp[i][j-1])
    {
      i--;
    }
    else{
      j--;
    }
  }
  return ans;  
}
int main()
{
   string s,t;
   string t=s;
   cin>>s;
   int n=s.size();
   reverse(t.begin(),t.end());
   cout<<palindromic(n-1,n-1,s,t);


}