#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i=0;
    while(i<n)
    {
        if(arr[i]==0)
        {
            arr[i+1]=0;
            i=i+2;
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}