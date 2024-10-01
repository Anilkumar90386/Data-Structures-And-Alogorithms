#include <bits/stdc++.h>
using namespace std;
void f(int i, int arr[], vector<int> &ls, int n, set<vector<int>>&ans)
{
    if (ls.size() >= 2)
    {
        ans.insert(ls);   
    }
    for (int ind = i; ind < n; ++ind)
    {
        if (ls.empty() || arr[ind] >= ls.back())
        {
            ls.push_back(arr[ind]);
            f(ind + 1, arr, ls, n, ans);
            ls.pop_back();
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    set<vector<int>>ans;
    vector<int> ls;
    f(0, arr, ls, n, ans);
    for (auto seq : ans)
    {
        for (int i = 0; i < seq.size(); ++i)
        {
            cout << seq[i]<<" ";
        }
        cout<<endl;
    }
}