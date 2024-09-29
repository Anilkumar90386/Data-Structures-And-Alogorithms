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
    // vector<int>temp;
    // int cnt=0;
    // int j=0;
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]!=0)
    //     {
    //         arr[j]=arr[i];
    //         j++;
    //     }
    //     else{
    //         cnt++;
    //     }
    // }
    // for(int i=j+1;i<n;i++)
    // {
    //     if(cnt)
    //     {
    //         arr[i]=0;
    //     }
    // }
       for(int i=0;i<n;i++)
       {
        int j=i+1;
        if(arr[i]==0)
        {
            swap(arr[i],arr[j]);
        }
        j++;
       }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}