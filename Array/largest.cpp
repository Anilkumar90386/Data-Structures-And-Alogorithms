#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,2,3,13,4,5};
    int maxi=0;
    for(int i=0;i<5;i++)
    {
        maxi=max(maxi,arr[i]);
    }
    cout<<maxi;
}