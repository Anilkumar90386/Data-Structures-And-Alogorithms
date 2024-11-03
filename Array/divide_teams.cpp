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
    sort(arr,arr+n);
    int l=0,r=n-1;
    int sum1=0,sum2=0,pro=1;
    while(l<r)
    {
        sum1=sum2;
        sum2+=arr[l]+arr[r];
        if(sum1==sum2)
        {
            pro+=arr[l]*arr[r];
        }
        l++;
        r--;
    }
    cout<<pro;
}