#include<bits/stdc++.h>
using namespace std;
int house_robber(int ind,int arr[])
{
    if(ind==0) return arr[0];
    int left=arr[ind]+house_robber(ind-2);
    int right=house_robber(ind-1);
    return min(left,right);
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
    cout<<house_robber(n-1,arr);
}