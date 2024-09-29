#include<bits/stdc++.h>
using namespace std;
int f(int a,int b)
{
    return b-a;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<f(a,b)<<endl;
    }
}