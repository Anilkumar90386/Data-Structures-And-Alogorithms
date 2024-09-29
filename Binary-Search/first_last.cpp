#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int target;
   
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    int low=0;
    int high=n-1;
    int ans=n;
    int first=-1,last=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            if(first==-1) first=i;
            last=i;
        }
    }
    cout<<"{"<<first<<" , "<<last<<"}";
}