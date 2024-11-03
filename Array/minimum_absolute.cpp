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
    vector<pair<int,int>>ans;   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int mini=min(mini,abs(arr[j]-arr[i]));
            ans.emplace_back(i,j);
        }
       
    }
    for(auto it:ans)
    {
        cout<<it.first<<" "<<it.second;
        cout<<endl;
    }
}