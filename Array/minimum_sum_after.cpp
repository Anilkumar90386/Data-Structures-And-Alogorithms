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
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int j=arr[i];
        int sum=0;
        while(j!=0)
        {
           sum=sum+j%10;
           j=j/10;
        }
       mini=min(sum,mini);
    }
    cout<<mini;
}