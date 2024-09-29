#include <bits/stdc++.h>
using namespace std;

long long maxDeckSize(vector<long long>& a, long long k) {
    long long n = a.size(), left = 1, right = *max_element(a.begin(), a.end()) + k;
    
    while (left < right) {
        long long mid = (left + right + 1) / 2, need = 0;
        for (long long x : a) {
            if (x < mid) {
                need += mid - x;
            }
        }
        if (need <= k) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }
    return left;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << maxDeckSize(a, k) << '\n';
    }
    return 0;
}
