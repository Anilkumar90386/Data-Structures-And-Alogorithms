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
    int lsum=0,rsum=0,maxsum=0;
    for(int i=0;i<k-1;i++)
    {
        lsum=lsum+arr[i];
    }
    maxsum=lsum;
    int index=n-1;
    for(int i=k-1;i>=0;i--)
    {
        lsum=lsum-arr[i];
        rsum=rsum+arr[index];
        index--;
        maxsum=max(maxsum,rsum+lsum);
    }
    cout<<maxsum;
}