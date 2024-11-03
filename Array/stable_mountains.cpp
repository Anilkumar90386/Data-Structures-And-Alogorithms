#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>ind;
    int count=2;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>k && count!=0)
        {
            ind.push_back(i+1);
            count--;
        }
    }
    for(auto it:ind)
    {
        cout<<it<<" ";
    }
}