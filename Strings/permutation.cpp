#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="abc";
    vector<string>s;
    next_permutation(s1.begin(),s1.end());
    for(auto it:s1)
    {
        cout<<it;
    }
}