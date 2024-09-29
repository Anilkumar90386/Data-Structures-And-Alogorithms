#include <bits/stdc++.h>
using namespace std;
int f(int n, int k)
{
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int gold = 0;
    int giveCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= k)
        {
            gold += a[i];
        }
        else if (a[i] == 0 && gold > 0)
        {
            giveCount++;
            gold--;
        }
    }
    return giveCount;
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