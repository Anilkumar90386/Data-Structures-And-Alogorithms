#include<bits/stdc++.h>
using namespace std;
void remove(int arr[],int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[i]!=arr[j])
        {
           arr[i+1]=arr[j];
           i++;
        }
    }
   
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
   remove(arr,n);
}