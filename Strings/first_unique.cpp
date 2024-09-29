#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(char c:s)
    {
        mp[c]++;
    }
   for(int i=0;i<s.size();i++)
   {
     if(mp[s[i]]==1)
     {
        cout<<i;
        break;
     }
   }
   cout<<-1;
}