#include<bits/stdc++.h>
using namespace std;
string f(int n,int m)
{
    if(n>=m) return "Yes";
    return "No";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<f(n,m)<<endl;
    }
}
