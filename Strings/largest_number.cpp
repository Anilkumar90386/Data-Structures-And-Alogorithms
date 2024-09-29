#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return to_string(a)+to_string(b)> to_string(b)+to_string(a);
}
int main()
{
    
    vector<int>arr={3,30,34,5,9};
    sort(arr.begin(),arr.end(),cmp);
    string ans;
    if(nums[0]==0) cout<<"0";
    for(int n:arr)
    {
        ans+=to_string(n);
    }
    cout<<ans;
   
}