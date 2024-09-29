#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    vector<int>temp;
    int i=0,j=0;
    while(i<n && j<m)
    {
       if(arr1[i]<arr2[j])
       {
           i++;
       }
       else if(arr1[i]>arr2[j]){
          j++;
       }
       else{
        temp.push_back(arr1[i]);
        i++;
        j++;
       }
    }
    for(auto it:temp)
    {
        cout<<it<<" ";
    }
}