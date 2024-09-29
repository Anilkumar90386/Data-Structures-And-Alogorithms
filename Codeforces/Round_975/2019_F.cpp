#include <bits/stdc++.h>
using namespace std;

long long maxScore(vector<int>& a) {
    int n = a.size();
    long long max_score = 0;

    for (int i = 0; i < n; ++i) {
        long long max_val = a[i], min_val = a[i], count = 1;
        for (int j = i + 2; j < n; j += 2) {
            max_val = max(max_val, a[j]);
            min_val = min(min_val, a[j]);
            count++;
        }
        if (i + 1 < n) {
            max_val = max(max_val, a[i + 1]);
            min_val = min(min_val, a[i + 1]);
            count++;
            for (int j = i + 3; j < n; j += 2) {
                max_val = max(max_val, a[j]);
                min_val = min(min_val, a[j]);
                count++;
            }
        }

        max_score = max(max_score, max_val + min_val + count);
    }
    return max_score;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << maxScore(a) << '\n';
    }
    return 0;
}
