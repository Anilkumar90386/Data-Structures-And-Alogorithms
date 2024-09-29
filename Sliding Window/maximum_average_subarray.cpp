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
    int l=0,r=0,sum=0;
    int maxsum=0,length=0;
    while(r<n){
        sum=sum+arr[r];
        if(length>k)
        {
            sum=sum-arr[l];
            l++;
        }
        if(length<=k)
        {
            length=r-l+1;
            maxsum=max(maxsum,sum);
        }
        r++;
    }
    cout<<float(maxsum/k);
}