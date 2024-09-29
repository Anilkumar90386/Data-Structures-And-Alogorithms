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
    cin>>k;
    int l=0,r=0;
    int cnt=0;
    while(r<=n)
    {
        if(r-l+1==k)
        {
            if(arr[l]==0) 
            {
                arr[l]=1;
                cnt++;
            }
            l++;
        }
        r++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
   
}