#include<bits/stdc++.h>
using namespace std;
int linear(int arr,int target)
{
    for(int i=0;i<arr.size();i++)
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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int num=0;
    for(int i=1;i<n;i++)
    {
       if(linear(arr,i))
       {
          num=i;
       }   
    }
    cout<<num;
}