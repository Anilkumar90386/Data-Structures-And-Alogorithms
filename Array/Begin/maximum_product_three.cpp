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
    int pro=1;
    sort(arr,arr+n);
    int cnt=3;
    for(int i=n-1;i>=0;i--)
    {
       if(cnt<=0)
       {
          break;
       }
       pro=pro*arr[i];
    }
    cout<<pro;
}