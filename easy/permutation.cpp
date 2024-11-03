#include <bits/stdc++.h>
using namespace std;
void perm(vector<int> &ds,string num, vector<vector<int>> &ans, int freq[])
{
    if (ds.size() == num.size())
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < num.size(); i++)
    {
        if (i > 0 && num[i] == num[i - 1] && !freq[i - 1]) continue;
        if (!freq[i])
        {
            ds.push_back(num[i] - '0');
            freq[i] = 1;
            perm(ds, num, ans, freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}
bool isBalanced(const vector<int>& num)
{
    int even = 0, odd = 0;
    for (int i = 0; i < num.size(); i++)
    {
        if (i % 2 == 0)
        {
            even += num[i];
        }
        else
        {
            odd += num[i];
        }
    }
   return odd==even;
}
int main()
{
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    vector<int> ds;
    vector<vector<int>> ans;
    int freq[s.size()];
    for (int i = 0; i < s.size(); i++)
    {
        freq[i] = 0;
    }
    perm(ds, s, ans, freq);
     int cnt = 0;
    for (const auto& perm : ans) {
       
        if (isBalanced(perm)) {
            cnt++;
        }
    }
    cout << cnt;
}