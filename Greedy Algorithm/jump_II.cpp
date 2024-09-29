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
    int cnt=1;
    int j=1;
    for(int i=2;i<n;i++)
    { 
        if(arr[i]>arr[j])
        {
            cnt++;
            j=i;
        }

    }
    cout<<cnt;
}