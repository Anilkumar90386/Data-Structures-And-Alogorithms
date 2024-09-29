#include<bits/stdc++.h>
using namespace std;
int f(int ind,int cost[])
{
    if(ind<=1) return 0;
    return min(cost[ind-1]+f(ind-1,cost),cost[ind-2]+f(ind-2,cost));
}
int main()
{
    int arr[]={10,15,10};
    cout<<f(3,arr);
}