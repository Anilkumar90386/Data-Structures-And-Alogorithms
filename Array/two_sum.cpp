#include<bits/stdc++.h>
using namespace std;
/// @brief 
/// @return 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int target;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   cin>>target;
    /*for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)       O(n^2)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<i<<" "<<j;
            }
        }
    }
    */ 
     
    return 0;
}