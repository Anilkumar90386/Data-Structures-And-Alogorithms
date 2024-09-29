#include<bits/stdc++.h>
using namespace std;
bool ismoprhic(string s1,string s2)
{
    vector<int>freq1(128,-1);
    vector<int>freq2(128,-1);
    for(int i=0;i<s1.size();i++)
    {
        if(freq1[s1[i]]!=freq2[s2[i]]) return false;
        freq1[s1[i]]=freq2[s2[i]]=i;
    }
    return true;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(ismoprhic(s1,s2))
    {
        cout<<"Isomorphic";
    }
    else{
        cout<<"Not";
    }
}