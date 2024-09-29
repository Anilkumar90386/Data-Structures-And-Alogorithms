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
    // int l=0,maxi=0;
    // for(int i=0;i<n;i++)
    // {
    //     int sum=0;
    //     for(int j=1+1;j<n;j++)
    //     {
    //         for(int k=i;k<=j;k++)
    //         {                    //Brute Force
    //             sum=sum+arr[k];
    //             if(sum==k)
    //             {
    //                 l=j-i+1;
    //             }
    //             maxi=max(maxi,l);
    //         }
    //     }
    // }
    //    int l=0,maxi=0;
    //    for(int i=0;i<n;i++)
    //    {
    //         int sum=0;
    //         for(int j=i;j<=n;j++)
    //         {
    //             sum+=arr[j];
    //             if(sum==k)         //BruteForce
    //             {
    //                 l=j-i+1;
    //             }  
    //             maxi=max(maxi,l);
    //         }
    //    }
    int l=0,r=0;
    int sum=0,maxi=0;
    while(r<n)
    {
        sum+=arr[r];
        if(sum>k)
        {
            sum-=arr[l];
            l++;
        }
        if(sum==k) maxi=max(maxi,r-l+1);
        r++;
    }
    cout<<maxi;
}