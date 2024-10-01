#include<bits/stdc++.h>
using namespace std;
void sub(int i,int arr[],vector<int>&ans,int n,vector<vector<int>>&ls,int XOR,int &sum)
{
     if(i==n)
     {
        for(auto it:ans)
        {
            XOR=XOR^it;
            
        }
        sum=sum+XOR;
        return;
     }
     ans.push_back(arr[i]);
     sub(i+1,arr,ans,n,ls,XOR,sum);
     ans.pop_back();
     sub(i+1,arr,ans,n,ls,XOR,sum);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>ans;
    int sum=0;
    vector<vector<int>>ls;
    sub(0,arr,ans,n,ls,0,sum);
    
    cout<<sum;
}   