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
    int maxi=arr[n-1];
    arr[n-1]=-1;
    for(int i=n-2;i>=0;i--)
    {
        int temp=arr[i];
        arr[i]=maxi;
        maxi=max(maxi,temp);
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}