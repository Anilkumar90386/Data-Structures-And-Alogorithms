#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int j=-1;
    for(int i=s.size()-1;i>=0;i--)
    {
        if((s[i]-'0')%2==1)
        {
            j=i;
            break;
        }
    }
    if(j==-1) cout<<"";
    int i=0;
    while(i<s.size())
    {
        if(s[i]!='0') break;
        i=i+1;
    }
    cout<<s.substr(i,j-i+1);
}