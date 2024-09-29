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
    int pref[n+1];
    int suffix[n+1];
    pref[0]=0;
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+arr[i-1];
    }
    suffix[n-1]=0;
    for(int i=n-2;i>=0;i--)
    {
        suffix[i]=suffix[i+1]+arr[i+1];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=pref[i]-suffix[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}