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
    int l=0,r=n-1;
    int cnt=0;
    vector<int>v;
    while(l<=r)
    {
        if(arr[l]<arr[l+1] && arr[r]<arr[r-1])
        {
           v.push_back(arr[l]);
           v.push_back(arr[r]);
        }
        l++;
        r--;
    }
    cout<<v.size();
}