#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = n / 4;
        if (n % 4 != 0) {
            cnt += 1;
        }
        cout << cnt << endl;
    }
}