#include<bits/stdc++.h>
using namespace std;
int f(int n,int k)
{
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
           k--;
        }
        if(k==0) return i;
    }
     for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
           k--;
        }
        if(k==0) return i;
    }
   return 0;
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<f(n,k)<<endl;
}