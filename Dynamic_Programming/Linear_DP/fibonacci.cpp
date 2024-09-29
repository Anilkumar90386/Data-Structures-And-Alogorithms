#include<bits/stdc++.h>
using namespace std;

int fibonacci_r(int n)
{
    if(n<=1)
    {
        return n;      //Recursion
    }
    
    return fibonacci_r(n-1)+fibonacci_r(n-2);
}


int fibonacci(int n,vector<int>&dp)
{
    if(n<=1)
    {                             //Memorization
        return n;
    }
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fibonacci(n-1,dp)+fibonacci(n-2,dp);
} 

/*
  dp[0]=0,dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];   //Tabulation way
    }
    cout<<dp[n];
*/
int main()
{
    int n;
    cin>>n;
    
   int prev=1,prev2=0;
    for(int i=2;i<=n;i++)       //Space Optimization
    {
       int curi=prev+prev2;
       prev2=prev;
       prev=curi;
    }
    cout<<prev;
   
}