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
    int k;
    cin >> k;
    int cnt=0;
    if(k<0) cout<<0;
    int l=0,r=0,sum=0;
    while(r<n)
    {
        sum=sum+arr[r];
        if(sum>k)
        {
            sum=sum-arr[l];
            l++;
        }
       cnt=cnt+(r-l+1);
       r++;
    }
    cout<<cnt;
}