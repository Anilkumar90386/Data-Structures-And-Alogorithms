#include<bits/stdc++.h>
using namespace std;
int f(int b,int c,int d)
{
    for(long i=0;i<=261;i++)
    {
        if((i|b)-(i&c)==d)
        {
           return i;
        }
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b,c,d;
        cin>>b>>c>>d;
        cout<<f(b,c,d)<<endl;
    }
}