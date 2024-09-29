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
    int l=0,r=k-1;
    vector<int>ans;
    while(r<n)
    {
        int maxi=0;
        for(int i=l;i<=r;i++)
        {
            maxi=max(maxi,arr[i]);
        }
        ans.push_back(maxi);
        l++;
        r++;
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}