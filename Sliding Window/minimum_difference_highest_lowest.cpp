#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   int k;
   cin>>k;
   int l=0,r=k-1,mini=INT_MAX,maxi=INT_MIN,minimum=INT_MAX;
   while(r<n)
   {
    for(int i=l;i<r;i++)
    {
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }
    int diff=abs(maxi-mini);
    minimum=min(minimum,diff);
    l++;r++;
   }
   cout<<minimum;
}