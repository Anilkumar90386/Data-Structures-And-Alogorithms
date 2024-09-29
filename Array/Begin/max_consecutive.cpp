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
    int maxi=INT_MIN,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cnt++;
        }
        else{
            cnt=0;
        }
        maxi=max(maxi,cnt);
    }
    cout<<maxi;
}