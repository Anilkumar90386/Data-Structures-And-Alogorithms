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
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            mp[arr[i][j]]++;
        }
    }
    int sum=0;
    for(auto it:mp)
    {
        if(it.second>=2)
        {
            cout<<it.first<<endl;
            sum+=it.first;
        }
        else if(it.second>0)
        {
            sum+=it.first;
        }
    }
    int c=n*m;
    int total=c*(c+1)/2;
    cout<<total-sum;

}