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
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            ans.push_back(sum);
        }
    }
    int cnt=0;
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]%2!=0) cnt++;
    }
    cout<<cnt;
}