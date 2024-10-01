#include<bits/stdc++.h>
using namespace std;
void f(int i,int arr[],vector<int>&ls,vector<vector<int>>&ans,int k,int n,int sum)
{
    if(i==n)
    {
        if(sum==k)
        {
          ans.push_back(ls);
        }
        return;
    }
    ls.push_back(arr[i]);
    sum+=arr[i];
    f(i+1,arr,ls,ans,k,n,sum);
    sum+=arr[i];
    ls.pop_back();
    f(i+1,arr,ls,ans,k,n,sum);
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>ls;
    vector<vector<int>>ans;
    f(0,arr,ls,ans,k,n,0);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}