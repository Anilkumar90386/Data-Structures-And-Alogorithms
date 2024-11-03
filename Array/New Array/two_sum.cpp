#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // Brute Force
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;i++)
    //     {
    //         if(arr[i]+arr[j]==target)
    //         {
    //             cout<<i<<j;
    //         }
    //     }
    // }

    // Better
    // map<int,int>mp;
    // for(int i=0;i<n;i++)
    // {
    //     int rem=target-arr[i];
    //     if(mp.find(rem)!=mp.end())
    //     {
    //         cout<<"YES";
    //     }
    //     mp[arr[i]]=1;
    // }

    //optimal

    sort(arr,arr+n);
    int l=0,r=n-1;
    while(l<r)
    {
        int sum=arr[l]+arr[r];
        if(sum==target)
        {
            cout<<"Yes";
        }
        else if(sum>target)
        {
            r--;
        }
        else{
            l++;
        }
    }
    

}