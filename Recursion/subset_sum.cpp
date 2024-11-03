#include<bits/stdc++.h>
using namespace std;
void subset_sum(int i,int arr[],int n,vector<int>&ls,int sum)
{
   if(i==n)
   {
    ls.push_back(sum);
    return;
   }
   subset_sum(i+1,arr,n,ls,sum+arr[i]);
   subset_sum(i+1,arr,n,ls,sum);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>ls;
    subset_sum(0,arr,n,ls,0);
    for(auto it:ls)
    {
        cout<<it<<" ";
    }
}