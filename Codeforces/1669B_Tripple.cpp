#include<bits/stdc++.h>
using namespace std;
int f(int n,vector<int>&arr)
{
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto it:mp)
    {
        if(it.second>2)
        {
            return it.first;
        }
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<f(n,arr)<<endl;
    }
}