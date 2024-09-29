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
    int l=0;
    int r=1;
    int maxi=0;
    while(r<n)
    {
       maxi=max(maxi,arr[l]^arr[r]);
       l++;
       r++;
    }
    cout<<maxi;
}