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
    int maxi=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cnt++;
            maxi=max(cnt,maxi);
        }
        else{
            cnt=0;
        }
    }
    cout<<maxi;
}