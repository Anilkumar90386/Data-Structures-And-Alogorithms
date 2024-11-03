#include<bits/stdc++.h>
using namespace std;
void f(int i,int arr[],vector<int>&ls,vector<vector<int>>&ans,int k,int n,int sum,int &cnt)
{
    if(i==n)
    {
       for(auto it:ls)
       {
         sum+=it;
       }
       if(sum%k==0){
            ans.push_back(ls);
            cnt++;
            sum=0;
       }
        return;
    }
    ls.push_back(arr[i]);
    f(i+1,arr,ls,ans,k,n,sum,cnt);
    ls.pop_back();
    f(i+1,arr,ls,ans,k,n,sum,cnt);
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
    int cnt=0;
    vector<vector<int>>ans;
    f(0,arr,ls,ans,k,n,0,cnt);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<cnt;
}