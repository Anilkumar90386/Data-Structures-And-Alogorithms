#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>nums(arr.begin(),arr.end());
    int size=nums.size();
    while(size>1)
    {
       for(int i=0;i<size-1;++i)
       {
         nums[i]=(nums[i]+nums[i+1])%10;
         cout<<nums[i]<<" ";
       }
       size--;
       cout<<endl;
    }
}