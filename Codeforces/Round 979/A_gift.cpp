#include<bits/stdc++.h>
using namespace std;
int f(int arr[],int n)
{
     sort(arr, arr + n, greater<int>());   
    int b[n];
    int c[n];
    int mini=INT_MAX,maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,arr[i]);
        b[i]=mini;
        maxi=max(maxi,arr[i]);
        c[i]=maxi;
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+(c[i]-b[i]);
    } 
    return sum;
   
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<f(arr,n)<<endl;
    }
}