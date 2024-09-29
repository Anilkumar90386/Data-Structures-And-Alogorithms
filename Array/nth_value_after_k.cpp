#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>pref(n,1);
    for(int i=0;i<k;i++)
    {
        pref[0]=1;
        for(int i=1;i<n;i++)
        {
            pref[i]=pref[i]+pref[i-1];
           
        }
    }
    cout<<pref[n-1];
}