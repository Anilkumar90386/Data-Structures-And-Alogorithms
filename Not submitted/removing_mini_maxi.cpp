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
    int maxIndex=-1,minIndex=-1,maxi=INT_MIN,mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
            maxIndex=i;
        }
    }
    for(int i=0;i<n;i++)
    {
         if(arr[i]<mini)
        {
            mini=arr[i];
            minIndex=i;
        }
    }
    if(minIndex<maxIndex)
    {
        cout<<minIndex+maxIndex;
    }
    else{
        cout<<n-minIndex+1+maxIndex;
    }
}