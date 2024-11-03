#include<bits/stdc++.h>
using namespace std;
void reverseString(string &s,int start,int end)
{
    while(start<end)
    {
        swap(s[start],s[end]);
        start++;end--;
    }
    return;
}
int main()
{
    string s;
    getline(cin,s);
    int n=s.size();
    int start=0;
    for(int end=0;end<=n;end++)
    {
        if(s[end]==n || s[end]==' ')
        {
            reverseString(s,start,end-1);
            start=end+1;
        }
        
    }
    cout<<s;
}