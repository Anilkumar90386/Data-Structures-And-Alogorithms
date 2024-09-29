#include <iostream>
#include <string>
using namespace std;

int titleToNumber(const string& columnTitle) {
    if (columnTitle.empty() || !isalpha(columnTitle[0])) {
        throw invalid_argument("Invalid input");
    }

    int result = 0;
    for (char c : columnTitle) {
        if (!isupper(c)) {
            throw invalid_argument("Input should contain only uppercase letters");
        }
        result = result * 26 + (c - 'A' + 1);
    }
    return result;
}

int main() {
    string columnTitle;
    cin >> columnTitle;
    try {
        cout << titleToNumber(columnTitle) << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    return 0;
}
