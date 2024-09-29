#include <bits/stdc++.h>
using namespace std;
static bool comparator(pair<int, char> p1, pair<int, char> p2)
{
    if (p1.first > p2.first)
        return true;
    if (p1.first < p2.second)
        return false;
    return p1.second < p2.second;
}
string frequencySort(string s)
{
    pair<int, char> freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = {0, i + 'a'};
    }
    for (char ch : s)
    {
        freq[ch - 'a'].first++;
    }
    sort(freq, freq + 26, comparator);
    string ans = "";
    for (int i = 0; i < 26; i++)
    {
        cout<<freq[i].second;
    }
    return ans;
}
int main()
{
    string s;
    getline(cin, s);
    cout << frequencySort(s);
}