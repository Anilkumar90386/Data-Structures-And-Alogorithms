#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,height;
    cin>>n>>height;
    int times[n];
    for(int i=0;i<n;i++)
    {
        cin>>times[i];
    }
    long long maxi=0;
    for(int i=0;i<=n;i++)
    {
        if(height>0)
        {
            long long seconds=times[i]*(i+1);
            height--;
            cout<<seconds;
            maxi=max(maxi,seconds);
        }
    }
    cout<<maxi;
}