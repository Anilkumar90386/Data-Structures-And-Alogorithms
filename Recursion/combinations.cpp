#include<bits/stdc++.h>
using namespace std;
void f(int i,vector<int>&ls,vector<vector<int>>&ans,int k,int n)
{
    if(i>n)
    {
        if(ls.size()==k)
        {
           ans.push_back(ls);
         
        }
          return;
    }
    ls.push_back(i);
    f(i+1,ls,ans,k,n);
    ls.pop_back();
    f(i+1,ls,ans,k,n);
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>ls;
    vector<vector<int>>ans;
    f(1,ls,ans,k,n);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}