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
    vector<int>pos;
    vector<int>neg;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }
    }
    int ind=0,ind1=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]=pos[ind++];
        }
        else{
            arr[i]=neg[ind1++];
        }
    }
   for(int i=0;i<n;i++)
   {
     cout<<arr[i]<<" ";
   }
}