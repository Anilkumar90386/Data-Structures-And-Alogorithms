#include <iostream>
using namespace std;

int minBills(int n) {
    int bills[] = {100, 20, 10, 5, 1};
    int count = 0;

    for (int bill : bills) {
        count += n / bill;
        n %= bill;
    }
    
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << minBills(n) << endl;
    return 0;
}
