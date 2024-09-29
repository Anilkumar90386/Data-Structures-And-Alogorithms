#include<bits/stdc++.h>
using namespace std;
int f(int x,int y,int n)
{
     int m=(n-y)/x;
     return m*x+y;
}
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
        int x,y,n;
        cin>>x>>y>>n;
        cout<<f(x,y,n)<<endl;
     }
}