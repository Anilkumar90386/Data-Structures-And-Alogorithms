#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="sayhelloworld";
    vector<string>dic={"hello","world"};
    string ans="";
    for(string s:dic)
    {
        ans+=s;
    }
    int cnt=0;
    int i=0,j=0;
    int m=ans.size(),n=s.size();
    while(i<n && j<m)
    {
        if(s[i]==ans[j])
        {
            i++;j++;
        }
        else if(s[i]!=ans[j])
        {
            i++;
            cnt++;
        }
    }
    cout<<cnt;
}