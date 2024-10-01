#include<bits/stdc++.h>
using namespace std;
bool issearch(int target,int arr[],int n)
{
     for(int i=0;i<n;i++)
     {
        if(arr[i]==target)
        {
            return true;
        }
     }
     return false;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;;i++)
    {
        if(!arr.find(i))
        {
           k--;
        }
       if(k==0){
            
            cout<<i;
            break;
        }
      
    }
}