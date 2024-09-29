#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int l = 0, r = 0, sum = 0, maxLength = 0;
    while (r < n)
    {
        sum = sum + arr[r];
        if (sum > k)
        {
            sum = sum - arr[l];
            l++;
        }
        if (sum <= k)
        {
            maxLength = max(maxLength, r - l + 1);
        }
        r++;
    }
    cout << maxLength;
}