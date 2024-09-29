#include <bits/stdc++.h>
using namespace std;
int sum_of_numbers(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum += arr[i];
        }
        else
        {
            sum -= arr[i];
        }
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << sum_of_numbers(arr, n) << endl;
    }
}
