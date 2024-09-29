#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int low,int high,int target)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {
            return binary(arr,low+1,high,target);
        }
        else{
            return binary(arr,low,high-1,target);
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
    cout<<binary(arr,0,n-1,target);
}