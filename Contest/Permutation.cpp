#include <bits/stdc++.h>
using namespace std;
int f(int p[],int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
       if(p[i-1]>p[i])  
       {
           sum+=p[i];
           sum+=p[i-1];
           break;
       }
    }
    return sum;
}
int main() {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int p[n];
         for(int i=0;i<n;i++)
         {
             cin>>p[i];
         }
         cout<<f(p,n);
     }
}
