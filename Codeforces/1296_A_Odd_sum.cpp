#include<bits/stdc++.h>
using namespace std;
string f(vector<int>&arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum%2==0 && sum<=2000? "NO" : "YES"; 
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<f(arr,n)<<endl;
    }
}