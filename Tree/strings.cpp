#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int n=s.size();
   int cnt=1;
   string ans="";
   for(int i=1;i<n;i++)
   {
      if(s[i]==s[i-1])
      {
        cnt++;
         if(cnt==9)
                {
                    ans+=to_string(cnt)+s[i];
                    cnt=0;
                }
      }
      else{
          ans+=to_string(cnt)+s[i-1];
          cnt=1;
      }
   }
   ans+=to_string(cnt)+s[n-1];
   cout<<ans;
   
}