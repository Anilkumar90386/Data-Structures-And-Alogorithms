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
    int maxi=0,mini=0;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    float sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=maxi && arr[i]!=mini) sum+=arr[i];
    }
    cout<<maxi<<" "<<mini;
}