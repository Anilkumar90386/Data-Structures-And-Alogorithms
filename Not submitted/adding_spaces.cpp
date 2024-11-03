#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    string ans="";
    for(int i=0;i<s.size();i++)
    {
        if(i==arr[i])
        {
            ans+=' ';
            continue;
            i--;
        }
        ans+=s[i];
    }
    cout<<ans;
}