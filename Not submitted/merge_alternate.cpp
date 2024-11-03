#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    string ans="";
   int i=0,j=0;
   while(i<s1.size() && j<s2.size())
   {
      ans=ans+s1[i]+s2[j];
      i++;j++;
   }
   while(i<s1.size())
   {
     ans+=s1[i];
     i++;
   }
   while(j<s2.size())
   {
    ans+=s2[j];
    j++;
   }
   cout<<ans;
}