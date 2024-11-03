#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   char first=toupper(s[0]);
   string res="";
   res=first+s.substr(1);
   cout<<res;
}