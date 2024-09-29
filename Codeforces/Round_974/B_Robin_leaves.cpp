#include <bits/stdc++.h>
using namespace std;
string f(int n, int k)
{
    int first = n - k + 1;
    if (((first + n) * k / 2) % 2 == 0)
        return "YES";
    return "NO";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << f(n, k) << endl;
    }
}