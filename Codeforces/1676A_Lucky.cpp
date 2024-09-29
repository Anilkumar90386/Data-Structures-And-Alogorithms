#include<bits/stdc++.h>
using namespace std;
string f(string s)
{
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        if(i<3) sum+=s[i]-'0';
        else sum-=s[i]-'0';
    }
    return (sum==0)? "YES":"NO";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<f(s)<<endl;
    }
}