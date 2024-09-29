#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int nums1[n],nums2[m];
    for(int i=0;i<n;i++)
    {
        cin>>nums1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>nums2[i];
    }
    int i=n-1;
    int j=m-1;
    int k=m+n-1;
    while(i>=0 && j>=0)
    {
        if(nums1[i]>nums2[j])
        {
            nums1[k]=nums1[i];
            k--;
            i--;
        }
        else{
            nums1[k]=nums2[j];
            k--;
            j--;
        }
    }
    while(j>=0)
    {
        nums1[k]=nums2[j];
        k--;
        j--;
    }
    while(i>=0)
    {
        nums1[k]=nums1[i];
        k--;
        i--;
    }
    for(int i=0;i<k;i++)
    {
        cout<<nums1[i]<<" ";
    }
}