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
    int l=0,r=n-1;
    int sum=0;
    while(l<r)
    {
        string ans=to_string(arr[l])+to_string(arr[r]);
        sum=sum+stoi(ans);
        l++;r--;
    }  
    sum=n%2==0 ? sum=sum :  sum=sum+arr[l];
    cout<<sum;
}