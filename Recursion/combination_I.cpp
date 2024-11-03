#include<bits/stdc++.h>
using namespace std;
void f(int i,int arr[],vector<int>&ls,vector<vector<int>>&ans,int n,int target)
{
    if(i==n)
    {
        if(target==0)
        {
            ans.push_back(ls);
        }
        return;
    }
    if(arr[i]<=target)
    {
        ls.push_back(arr[i]);
        f(i,arr,ls,ans,n,target-arr[i]);
        ls.pop_back();
    }
    f(i+1,arr,ls,ans,n,target);
}
int main()
{
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<vector<int>>ans;
    vector<int>ls;
    f(0,arr,ls,ans,n,target);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}