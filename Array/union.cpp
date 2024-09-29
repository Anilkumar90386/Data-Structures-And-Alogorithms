#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
     for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    vector<int>num;
    set<int>st;
    for(int i=0;i<n;i++)
    {
        st.insert(arr1[i]);
    }
    for(int i=0;i<n;i++)
    {
        st.insert(arr2[i]);
    }
    for(auto it:st)
    {
        num.push_back(it);
    }
    for(auto it:num)
    {
        cout<<it<<" ";
    }
}