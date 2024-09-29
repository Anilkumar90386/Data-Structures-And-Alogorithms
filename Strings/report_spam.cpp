#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> msg={"hello","world","leetcode"};
    vector<string> ban={"world","hello"};
    int cnt=0;
    for(string s:msg)
    {
        for(string b:ban)
        {
            if(s.find(b) !=string::npos)
            {
                cnt++;
                break;
            }
        }
    }
    if(cnt>=2) cout<<true;
    else cout<<false;
}