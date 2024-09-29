  #include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // int maxi=INT_MIN;
    // for(int i=0;i<n;i++)
    // {
    //     int sum=0;
    //     for(int j=i+1;j<n;j++)      //Better
    //     {
    //         sum+=arr[j];
    //         maxi=max(maxi,sum);
    //     }
    // }
    // cout<<maxi;
    int sum=0,maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)
        {
            sum=0;
        }
        maxi=max(maxi,sum);
    }
    cout<<maxi;
}
