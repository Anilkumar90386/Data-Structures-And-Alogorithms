#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculateMaxScore(const vector<int>& arr) {
    int n = arr.size();
    int max_score = 0;

    for (int i = 0; i < n; ++i) {
        int score = arr[i];  // Current element as max red element
        int count = 1;       // Count of red elements

        for (int j = i + 2; j < n; ++j) {  // Start from i+2 to avoid adjacent reds
            if (arr[j] >= arr[i]) {
                score = max(score, arr[j]);
                count++;
            }
        }
        max_score = max(max_score, score + count);
    }

    return max_score;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        
        cout << calculateMaxScore(arr) << endl;
    }
    
    return 0;
}
