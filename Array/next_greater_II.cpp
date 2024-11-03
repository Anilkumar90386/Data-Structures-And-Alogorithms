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
    vector<int>ans;
    int i=0,j=1;
    while(i<n && j<n)
    {
        if(arr[i]<arr[j])
        {
            ans.push_back(arr[j]);
            i++;
            j=i+1;
        }
        else{
            ans.push_back(-1);
        }
        j++;
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}