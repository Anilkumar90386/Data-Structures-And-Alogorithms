#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0;
    string ans="";
    int nums[3]={3,5,9};
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<s[j]+nums[i]<<endl;
        }
    }
   
}