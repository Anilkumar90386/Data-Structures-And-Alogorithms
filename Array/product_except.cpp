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
    int prefix[n];
    int sufix[n];
    prefix[0]=1;
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]*arr[i-1];
    }
    sufix[n-1]=1;
    for(int j=n-2;j>=0;j--)
    {
        sufix[j]=sufix[j+1]*arr[j+1];
    }
    int prod[n];
    for(int i=0;i<n;i++)
    {
        prod[i]=prefix[i]*sufix[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<prod[i]<<" ";
    }
}