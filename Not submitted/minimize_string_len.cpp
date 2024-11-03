#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char>freq(26,0);
    for(int i=0;i<s.size();i++)
    {
        freq[s[i]-'a']++;
    }
    int cnt=0;
    for(int i=0;i<26;i++)
    {
        if(freq[i]>0)
        {
            cnt++;
        }
    }
    cout<<cnt;
}