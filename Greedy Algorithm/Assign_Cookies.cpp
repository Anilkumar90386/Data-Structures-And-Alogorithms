#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int greed[n];
    int s[m];
    for(int i=0;i<n;i++)
    {
        cin>>greed[i];
    } 
     for(int i=0;i<n;i++)
    {
        cin>>greed[i];
    } 
    int l=0,r=0;
    while(l<m)
    {
        if(s[l]>=greed[r])
        {
            r++;
        }
        l++;
    }
    cout<<r;
    
}