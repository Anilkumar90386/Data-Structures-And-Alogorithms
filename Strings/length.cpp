#include<bits/stdc++.h>
using namespace std;
int getLength(string name)
{
   for(auto it:name)
   {
    cnt++;
   }
  return cnt;
}
int main()
{
    string name;
    getline(cin,name);
    getLength(name);
}