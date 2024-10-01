#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=0,r=n-1;
    while(l<=r)
    {
        int sum=abs(arr[l]+arr[r]);
        if(sum%k!=0)
        {      
            cout<<false;
            return 0;
        }
        l++;r--;
    }
    cout<<true;
}