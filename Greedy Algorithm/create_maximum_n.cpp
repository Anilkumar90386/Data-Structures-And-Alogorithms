#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int nums1[n];
    int nums2[m];
    for(int i=0;i<n;i++)
    {
        cin>>nums1[i];
    } 
     for(int i=0;i<m;i++)
    {
        cin>>nums2[i];
    } 
    sort(nums1,nums1+n,greater<int>());
    sort(nums2,nums2+m,greater<int>());
    vector<int>ans(k);
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(nums1[i]<nums2[j])
        {
            ans.push_back(nums2[j]);
            j++;
        }
        else{
            ans.push_back(nums1[i]);
            i++;
        }
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}