#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    unordered_map<string, int> mp;
    istringstream iss1(s1);
    string w1;
    while (iss1 >> w1)
    {
        mp[w1]++;
    }
    istringstream iss2(s2);
    string w2;
    while (iss2 >> w2)
    {
        mp[w2]++;
    }
    vector<string> ans;
    for (auto it : mp)
    {
        if (it.second == 1)
        {
            ans.push_back(it.first);
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
}