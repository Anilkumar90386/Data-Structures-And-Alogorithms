#include<bits/stdc++.h>
using namespace std;
string largeOdd(string s)
{
    int i=s.size();
    string ans="";
    while(i>=0)
    {
       if((s[i]-'0')%2!=0 && (s[i]-'0')!=0)
       {
         ans+=s[i];
       }
       i--;
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<largeOdd(s)<<endl;
}