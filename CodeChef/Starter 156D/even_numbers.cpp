#include <iostream>
#include <vector>
using namespace std;

int maxOddPrefixSums(int arr[], int n) {
    int countOdd = 0;
    int countEven = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }

    if (countOdd > 0) {
        return countOdd + min(1, countEven);
    }

    return 0;
}

void rearrangeArray(int arr[], int n) {
    vector<int> oddNumbers;
    vector<int> evenNumbers;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenNumbers.push_back(arr[i]);
        } else {
            oddNumbers.push_back(arr[i]);
        }
    }

    vector<int> rearranged;

    if (!oddNumbers.empty()) {
        rearranged.push_back(oddNumbers.back());
        oddNumbers.pop_back();

        while (!oddNumbers.empty() || !evenNumbers.empty()) {
            if (!evenNumbers.empty()) {
                rearranged.push_back(evenNumbers.back());
                evenNumbers.pop_back();
            }
            if (!oddNumbers.empty()) {
                rearranged.push_back(oddNumbers.back());
                oddNumbers.pop_back();
            }
        }
    }

    cout << "Rearranged Array: ";
    for (int num : rearranged) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

       cout<<maxOddPrefixSums(arr, n)<<endl;
        

        rearrangeArray(arr, n);
    }
    return 0;
}
