#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //       if(arr[i]+arr[j]==k)    //Brute Force
    //       {
    //         cout<<i<<" "<<j;
    //       }
    //     }
    // }
    // map<int,int>mp;
    // for(int i=0;i<n;i++)
    // {
    //     int req=k-arr[i];
    //     if(mp.find(req)!=mp.end())
    //     {
    //         cout<<mp[req]<<" "<<i;
    //     }
    //     mp[arr[i]]=1;

    // }
    sort(arr,arr+n);
    int l=0;
    int r=n-1;
    while(l<r)
    {
        int sum=arr[l]+arr[r];
        if(sum==k)
        {
            cout<<l<<r;
            l++;r--;
        }
        else if(sum>k) r--;
        else l++;
    }
}