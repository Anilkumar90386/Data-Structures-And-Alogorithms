#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define all(a) a.begin(), a.end()
using ll = long long;
using namespace std;
int main()
{
    FIO
    int n;
    cin >> n;
    vector<vector<int>> inds(n + 1,  vector<int>());
    vector<int> arr(2 * n);
    for(int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
        inds[arr[i]].push_back(i);
    }
    int si = 0, di = 0;
    ll ans = 0;
    for(int i = 1; i <= n; i++) {
        ll d1 = abs(si - inds[i][0]) + abs(di - inds[i][1]);
        ll d2 = abs(si - inds[i][1]) + abs(di - inds[i][0]);
        ans += min(d1, d2);
        si = inds[i][0];
        di = inds[i][1];
    }
    cout << ans << "\n";
    return 0;
}