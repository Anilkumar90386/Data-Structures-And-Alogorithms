#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        vector<long long> segment_count(n);
        for (int i = 0; i < n; i++) {
            segment_count[i] = (i + 1) * (n - (i + 1));
        }

        unordered_map<long long, long long> count_map;
        for (int i = 0; i < n; i++) {
            count_map[segment_count[i]]++;
        }

        vector<long long> queries(q);
        for (int i = 0; i < q; i++) {
            cin >> queries[i];
        }

        for (const auto& k : queries) {
            cout << count_map[k] << " ";
        }
        cout << "\n";
    }

    return 0;
}
