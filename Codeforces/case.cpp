#include<bits/stdc++.h>
using namespace std;
string changeCase(const string& str) {
    if (str.empty()) {
        return str;
    }
    char firstChar = str[0];
    string result = str;
    if (isupper(firstChar)) {
        for (char& c : result) {
            c = toupper(c);
        }
    } 
    else {
        for (char& c : result) {
            c = tolower(c);
        }
    }
    return result;
}
int main() {
    string input;
    getline(cin, input);
    string output = changeCase(input);
    cout << output << endl; 
    return 0;
}
