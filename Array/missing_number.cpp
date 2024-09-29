#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    /*Brute Force -> O(N*N)
    for(int i=1;i<i<n;i++)
    {
        bool flag=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==i)
            {
                flag=1;
                 break;
            }
        }
        if(flag==0)
        {
            return i;
        }
    }
    */
   /*Better Solution -> TC ->O(N) and SC -> o(N)
    map<int,int>mp;
   for(int i=0;i<n;i++)
   {
    mp[arr[i]]++;
   }
   for(auto it:mp)
   {
     if(it.second<1)
     {
        cout<<it.first;
     }
   }
   */
   /*Optimal solution -> TC -> O(N)*/
   int total=n*(n+1)/2;
   int sum=0;
   for(int i=1;i<=n;i++)
   {
    sum=sum+arr[i];
   }
   cout<<abs(total-sum);  
}