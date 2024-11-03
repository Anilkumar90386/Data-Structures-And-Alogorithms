#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int even=0,odd=0;
    for(int i=0;i<s.size();i++)
    {
        int digit=s[i]-'0';
        if(i%2==0)
        {
            even+=digit;
        }
        else{
            odd+=digit;
        }
    }
    if(even%2==0 && odd%2!=0) cout<<true;
    cout<<false;
}