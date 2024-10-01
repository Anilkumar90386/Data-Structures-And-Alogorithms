#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<long long> results(t);
    for (int i = 0; i < t; ++i) {
        long long k;
        cin >> k;
        results[i] = k * k;
    }
    for (long long n : results) {
        cout << n << endl;
    }
    return 0;
}
