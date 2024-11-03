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
        int max_val=*max_element(arr,arr+n);
        int min_val=*min_element(arr,arr+n);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<max_val && arr[i]>min_val)
            {
                cnt++;
            }
        }
        cout<<cnt;
}