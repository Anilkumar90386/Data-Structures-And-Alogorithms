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
   int k;
   cin>>k;
   int i=0;
   while(k-arr[i]>=0)
   {
      k=k-arr[i];
      cout<<k<<" ";
      i++;
      if(i==n)
      {
         i=0;
      }
   }
   
  
}