#include <bits/stdc++.h>
using namespace std;
void f(int i, int n, vector<int> &v)
{
    if (i > n)
        return;
    cout<<i<<" ";
    for (int j = 0; j < 10; j++)
    {
        f(i * 10 + j, n, v);
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 1; i <= 9; i++)
    {
        f(i, n, v);
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i + 1 == k)
        {
           cout<<v[i]<<endl;
        }
    }
    return 0;
}