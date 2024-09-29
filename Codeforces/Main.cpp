#include <iostream>
#include <unordered_set>
using namespace std;
const int MAX_SIZE = 1000;
bool calculateDifferences(int arrayOne[], int arrayTwo[], int size, int& startIndex, int& endIndex, int& diffValue) {
    bool possible = true;
    diffValue = -1;

    for (int i = 0; i < size; i++) {
        if (arrayOne[i] != arrayTwo[i]) {
            if (startIndex == -1) {
                startIndex = i;
            }
            endIndex = i;
            int diff = arrayTwo[i] - arrayOne[i];
            if (diffValue == -1) {
                diffValue = diff;
            } else if (diffValue != diff) {
                possible = false;
                break;
            }
        }
    }
    return possible;
}

bool modifyAndVerify(int arrayOne[], int arrayTwo[], int size, int startIndex, int endIndex, int diffValue) {
    for (int i = startIndex; i <= endIndex; i++) {
        arrayOne[i] += diffValue;
    }
    bool identical = true;
    for (int i = 0; i < size; i++) {
        if (arrayOne[i] != arrayTwo[i]) {
            identical = false;
            break;
        }
    }
    return identical;
}

int main() {
    int size;
    cin >> size;

    if (size <= 0 || size > MAX_SIZE) {
        cerr << "Invalid array size." << endl;
        return 1;
    }

    int arrayOne[size], arrayTwo[size];

    for (int i = 0; i < size; i++) {
        cin >> arrayOne[i];
    }
    for (int i = 0; i < size; i++) {
        cin >> arrayTwo[i];
    }

    int startIndex = -1, endIndex = -1, diffValue = -1;
    bool possible = calculateDifferences(arrayOne, arrayTwo, size, startIndex, endIndex, diffValue);

    if (startIndex != -1 && possible && diffValue > 0) {
        bool identical = modifyAndVerify(arrayOne, arrayTwo, size, startIndex, endIndex, diffValue);
        if (identical) {
            cout << "YES " << diffValue << endl;
        } else {
            cout << "NO 0" << endl;
        }
    } else {
        unordered_set<int> equalElements;
        for (int i = 0; i < size; i++) {
            if (arrayOne[i] == arrayTwo[i]) {
                equalElements.insert(arrayOne[i]);
            }
        }
        cout << "NO " << equalElements.size() << endl;
    }

    return 0;
}
