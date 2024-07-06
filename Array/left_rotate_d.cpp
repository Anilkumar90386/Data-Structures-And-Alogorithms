#include<bits/stdc++.h>
using namespace std; 
/*
int reverse(int arr[],int start,int end)
{
    while(start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    }
    return arr;
    
}*/
int main()
{
    int n,d;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>d;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);         /*O(N)*/
    reverse(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}