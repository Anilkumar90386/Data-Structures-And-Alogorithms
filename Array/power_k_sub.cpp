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
    vector<int>res;
    int l=0,r=0;
    int i=0;
    int maxi=INT_MIN;
    while(r<n-1)
    {
        if(r-l+1==k)
        {
           maxi=max(maxi,arr[r]);
           if(arr[r-1]<arr[r])
           {
              res.push_back(maxi);
           }
           else{
              res.push_back(-1);
           }
           l++;
        }
        r++;
    }
    res.push_back(-1);
    for(auto it:res)
    {
        cout<<it<<" ";
    }

}