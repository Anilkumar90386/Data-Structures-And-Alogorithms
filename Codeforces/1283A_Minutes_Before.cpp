#include<bits/stdc++.h>
using namespace std;
int f(int h,int m)
{
    return 1440-((h*60)+m);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m;
        cin>>h>>m;
        cout<<f(h,m)<<endl;
    }
}