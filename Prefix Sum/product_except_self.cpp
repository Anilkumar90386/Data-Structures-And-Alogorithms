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
    int pref[n];
    pref[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        pref[i]=pref[i-1]*arr[i];
    }
    int suf[n];
    suf[n-1]=arr[0];
    for(int i=0;i<n-1;i++)
    {
        suf[i]=suf[i]
    }
     for(int i=0;i<n;i++)
    {
        cout<<pref[i]<<" ";
    }


}