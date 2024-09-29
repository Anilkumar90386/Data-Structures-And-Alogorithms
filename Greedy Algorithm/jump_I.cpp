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
    int maxInd=0;
    for(int i=0;i<n;i++)
    {
        if(i>maxInd) cout<<false<<endl;
        maxInd=max(maxInd,i+arr[i]);
    }
    cout<<true;
}