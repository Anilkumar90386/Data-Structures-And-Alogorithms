#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2; 
    int i=0,j=0;
    while(i<s1.size())
    {
        if(s1[i]==s2[j])
        {
            i++;
            j++;
        }     
    }
   cout<<s2[j];  
}