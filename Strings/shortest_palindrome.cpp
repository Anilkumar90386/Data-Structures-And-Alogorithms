#include<bits/stdc++.h>
using namespace std;
string f(string s)
{
    reverse(s.begin(),s.end());
    string ans="";
    for(int i=0;i<=s.size()/2;i++)
    {
        ans+=s[i];
    }
    for(int i=ans.size();i>=0;i--)
    {
        ans+=ans[i];
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<f(s);
}