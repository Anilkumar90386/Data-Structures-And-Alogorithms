#include<bits/stdc++.h>
using namespace std;
string reverse(int l,int r,string s)
{
    while(l<=r)
    {
        swap(s[l],s[r]);
        l++;
        r--;
    }
    return s;
}
int main()
{
    string s;
    int k;
    cin>>s;
    cin>>k;
    string ans="";
    int l=0;
    int r=0;
    int n=k;
    for (int i = 0; i < n; i += k) {
        int l = i;
        int r =i+k-1;
        ans = reverse(l, r, s);  
        cout<<ans<<endl;
    }
    
}