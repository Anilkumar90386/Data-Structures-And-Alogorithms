#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int sum=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>k)
            {
               break;
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
}