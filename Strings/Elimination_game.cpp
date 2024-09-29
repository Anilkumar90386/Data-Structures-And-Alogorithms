#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=1;i<=n;i++)
    {
        arr.push_back(i);
        
    }
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
}