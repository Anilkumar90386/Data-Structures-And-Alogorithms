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
    stack<int>st;
    int ans[n];
    ans[n-1]=-1;
    for(int i=n-1;i>=0;i--)
    {
         st.push(arr[i]);
         int el=st.top();
         if(el>arr[i])
         {
            ans[(n-1)-i];
         }
         else{
            st.pop();
         }
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}