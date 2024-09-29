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
    
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
    }
    int sum=maxi;
    for(int i=1;i<k;i++)
    {
       sum+=1+maxi;
    }
    int num= k%2==0 ? sum :sum+1;
    cout<<num;
}