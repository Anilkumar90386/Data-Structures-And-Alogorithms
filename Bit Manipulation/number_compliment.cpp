#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string res="";
  while(n!=1)
  {
      if(n%2==1) res+='0';
      else res+='1';
      n=n/2;
  }
  res+='0';
  reverse(res.begin(),res.end());
  int num=0;
  int p=1;
  for(int i=res.size()-1;i>=0;i--)
  {
   if(res[i]=='1') num=num+p;
   p=p*2;
  }
  cout<<num;
}