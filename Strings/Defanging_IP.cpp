#include<bits/stdc++.h>
using namespace std;
int main()
{
    string address;
    getline(cin,address);
    string s="";
    for(int i=0;i<address.size();i++)
    {
        if(address[i]=='.')
        {
            s=s+"[.]";
        }
        else{
            s=s+address[i];
        }
    }
    cout<<s;
    
    
}