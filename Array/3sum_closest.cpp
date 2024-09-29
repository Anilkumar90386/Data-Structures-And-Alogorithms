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
   int target;
   cin>>target;
   for(int i=0;i<n;i++)
   {
     int first=arr[i];
     int start=i+1;
     int end=arr.size()-1;
     while(start<end)
     {
        if(first+arr[start]+arr[end]<=target)
        {
            
        }
     }
   }
}