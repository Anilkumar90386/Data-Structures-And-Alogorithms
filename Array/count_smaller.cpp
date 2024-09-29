#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        vector<int>counts;
        for(int i=0;i<n;i++)
        {
            int cnt=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                cnt++;
            }
        }
        counts.push_back(cnt);
        }
    for(auto it:counts)
    {
        cout<<it<<" ";
        
    }
}