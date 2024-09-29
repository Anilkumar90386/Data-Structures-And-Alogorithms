#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi=0;
    int cnt=0;
    int k;
    cin>>k;
    int l=0,r=0,maxlength=0,zeroes=0;
    while(r<n)
    {
        if(arr[r]==0)  zeroes++;
        while(zeroes>k)
        {
            if(arr[l]==0) zeroes--;
            l++;
        }
        if(zeroes<=k)
        {
            maxlength=max(maxlength,r-l+1);
        }
        r++;
    }
    cout<<maxlength;
}