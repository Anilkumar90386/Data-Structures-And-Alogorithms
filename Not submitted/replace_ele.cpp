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
   
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;--i)
    {
        maxi=max(maxi,exchange(arr[i],maxi));
    }
    arr[n-1]=-1;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}