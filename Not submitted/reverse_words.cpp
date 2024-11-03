#include<bits/stdc++.h>
using namespace std;
void reverse(string &s,int start,int end)
{
    while(start < end) {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++, end--; 
        }
        return;
}
int main()
{
    string s;
    getline(cin,s);
    reverse(s.begin(),s.end());
    int start=0,end=0;
    int i=0,j=0;
    int n=s.size();
    while(i<n)
    {
        while(j<n && s[j]==' ') j++;
        start=i;
        while(j<n && s[j]!=' ')
        {
            s[i]=s[j];
            i++;j++;
        }
        end=i-1;
        reverse(s,start,end);
        s[i++]=' ';
    }
    string ans=s.substr(0,end+1);
    cout<<ans;
   
}