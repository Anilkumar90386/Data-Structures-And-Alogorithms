#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    vector<int> arr;
    int i = 0;
    int j = 0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr2[j]<arr1[i])
        {
            j++;
        }
        else{
            arr.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}