#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    string ans="";
    for(int i=0;i<s.size();i++)
    {
        int l=i;
        int r=k;
        swap(s[l],s[r]);
        ans+=s;
    }
    cout<<s;
}