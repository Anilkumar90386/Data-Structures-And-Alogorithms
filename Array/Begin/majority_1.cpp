#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++)
    // {
    //     int cnt=0;
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(arr[i]==arr[j])
    //         {
    //             cnt++;
    //         }                
    //     }
    //     if(cnt==n/2){
    //         cout<<arr[i];
    //     }
    // }
    // map<int,int>mpp;
    // for(int i=0;i<n;i++)
    // {
    //     mpp[arr[i]]++;
    // }
    // for(auto it:mpp)
    // {
    //     if(it.second>=n/2)
    //     {
    //         cout<<it.first;
    //     }
    // }
    int cnt=0;
    int el;
    for(int i=0;i<n;i++)
    {
        if(cnt==0)
        {
            cnt=1;
            el=arr[i];
        }
        else if(arr[i]==el)
        {
            cnt++;
        }
        else{
            cnt--;
        }
    }
   cout<<cnt;
}
