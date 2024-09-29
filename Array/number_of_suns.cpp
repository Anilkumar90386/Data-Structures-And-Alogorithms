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
    int maxi=arr[0];
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
            cnt++;
        }
    }
    cout<<cnt;
}