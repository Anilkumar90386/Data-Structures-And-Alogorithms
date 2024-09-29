#include<bits/stdc++.h>
using namespace std;
/*int frog_jump(int ind,int arr[])
{
    if(ind==0) return 0;
    int left=frog_jump(ind-1,arr)+abs(arr[ind]-arr[ind-1]);
    int right=INT_MAX;            //Recursion
    if(ind>1)
    {
        right=frog_jump(ind-2,arr)+abs(arr[ind]-arr[ind-2]);
    }
    return min(left,right);
}*/

/*
int frog_jump(int ind,int arr[],vector<int>&dp)
{
    if(ind==0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int left=frog_jump(ind-1,arr,dp)+abs(arr[ind]-arr[ind-1]);
    int right=INT_MAX;                                ////Memorization  
    if(ind>1)
    {
        right=frog_jump(ind-2,arr,dp)+abs(arr[ind]-arr[ind-2]);
    }
    return dp[ind]=min(left,right);
}
*/
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int prev=0,prev2=0;
    for(int i=1;i<n-1;i++)
    {
        int left=prev+abs(arr[i]-arr[i-1]);
        int right=INT_MAX;
        if(i>1)
        {
            right=prev2+abs(arr[i]-arr[i-2]);
        }
        int curi=min(left,right);
        prev=prev;
        prev=curi;
    }
    cout<<prev;
}