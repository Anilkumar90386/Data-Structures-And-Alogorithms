#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    int maxi=0,res=0;
    for(int i=0;i<(1 << n);i++)
    {
        res=(a^i)*(b^i);
        maxi=max(maxi,res);
    }
    cout<<maxi;
}