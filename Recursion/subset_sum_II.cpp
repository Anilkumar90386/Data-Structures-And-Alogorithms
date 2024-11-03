#include<bits/stdc++.h>
using namespace std;
void subset_sum_II(int i,int arr[],int n,vector<vector<int>>&ans,vector<int>&ls,int sum)
{
    if(i==n)
    {
        ans.push_back(ls);
        return;
    }
    ls.push_back(arr[i]);
    subset_sum_II(i+1,arr,n,ans,ls,sum+arr[i]);
    ls.pop_back();
    subset_sum_II(i+1,arr,n,ans,ls,sum);
}
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>ls;
    vector<vector<int>>ans;
    subset_sum_II(0,arr,n,ans,ls,0);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}