#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    int left = 0, top = 0, right = m - 1, bottom = n - 1;
    vector<int> ans;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(mat[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(mat[i][right]);
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            ans.push_back(mat[bottom][i]);
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            ans.push_back(mat[i][left]);
        }
        left++;
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
}