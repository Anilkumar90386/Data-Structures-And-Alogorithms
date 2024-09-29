#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int maxi=1;
   vector<pair<int,int>>row;    
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1)
            {
                cnt++;
            }       
        }   
        row.push_back({cnt,i});
    }
    sort(row.begin(), row.end());
    vector<int>ans;
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        ans.push_back(row[i].second);
    }
    for(auto it:ans)
    {
        cout<<it;
    }
}