#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<s.size();i++)
    {
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    string s1=s[0];
    string s2=s[s.size()-1];
    int i=0,j=0;
    string ans="";
    while(i<s.size() && j<s2.size())
    {
        if(s1[i]==s2[j])
        {
           ans+=s1[i];
        }
        i++;j++;
    }
    cout<<ans;
}