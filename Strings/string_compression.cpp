#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string ans="";
    int count=1;
    for(int i=0;i<s.size();i++)
    {
        if(i<s.size()-1 && s[i]==s[i+1])
        {
            count++;
            if(count==9)
            {
                ans+=to_string(count)+s[i];
                count=0;
            }      
        }
         else{
                ans+=to_string(count)+s[i];
                count=1;
            }   
    }
    cout<<ans;
    
}