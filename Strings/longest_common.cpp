#include<bits/stdc++.h>
using namespace std;
string LongestCommon(vector<string>&s)
{
    sort(s.begin(),s.end());
    string s1=s[0];
    string s2=s[s.size()-1];
    int i=0,j=0;
    string ans="";
    while(i<s1.size() && j<s2.size())
    {
        if(s1[i]==s2[j])
        {
            ans+=s1[i];
            i++,j++;
        }
        else{
            break;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    cout<<LongestCommon(s);
    
}