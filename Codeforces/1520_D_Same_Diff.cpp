#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long cnt = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int diff = arr[i] - i;
            if (mp.find(diff) != mp.end())
            {
                cnt += mp[diff];
            }
            mp[diff]++;
        }
        cout << cnt<<endl;
    }
}