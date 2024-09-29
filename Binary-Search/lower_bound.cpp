#include<bits/stdc++.h>
using namespace std;
int lower_bound(int arr[],int low,int high,int target)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {
            return lower_bound(arr,low+1,high,target);
        }
        else{
            return lower_bound(arr,low,high-1,target);
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int target;
   
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=target)
        {
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
}