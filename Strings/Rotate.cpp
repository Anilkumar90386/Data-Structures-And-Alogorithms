#include<bits/stdc++.h>
using namespace std;
// bool f(string s,string goal)
// {
    
//     string l="";
//     if(s.size()!=goal.size()) return false;
//     for(int i=0;i<s.size();i++)
//     {
//         string r=s.substr(i);
//         if(r+l==goal) return true;
//         l+=s[i];
//     }
//     return false;
// }
bool f(string s,string goal)
{
    if(s.size()!=goal.size()) return false;
     string ans=s+s;
     return ans.find(goal);
}
int main()
{
    string s,goal;
    cin>>s>>goal;
    cout<<f(s,goal);
}