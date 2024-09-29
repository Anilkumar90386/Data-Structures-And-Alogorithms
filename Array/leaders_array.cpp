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
    vector<int>temp;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>maxi)
        { 
           maxi=arr[i];
           temp.push_back(maxi);
        }
         
    }
    for(auto it:temp)
    {
        cout<<it<<" ";
    }
}