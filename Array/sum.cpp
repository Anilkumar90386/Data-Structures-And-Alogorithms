#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5]={1,1,1,1};
  int arr1[5]={1,1,1,1};
  int arr2[5];
  for(int i=0;i<5;i++)
  {
    arr2[i]=arr[i]+arr1[i];
  }
  for(int i=0;i<5;i++)
  {
    cout<<arr2[i]<<" ";
  }
   
}