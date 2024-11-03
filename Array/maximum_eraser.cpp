#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int>res;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int>mp;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(mp.find(arr[i])!=mp.end())
        {
            mp[arr[i]]++;
        }
       else{
          mp[arr[i]]=1;
       }
    }
    for(auto it:mp)
    {
       sum+=it.first;
    }
    cout<<sum;
}