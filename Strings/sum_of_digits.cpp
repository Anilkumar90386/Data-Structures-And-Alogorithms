#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=0;
    for(char c:s)
    {
        int val=c+1-'a';
        n += val / 10 + val % 10;
    }
    cout<<n;
    int k;
    cin>>k;
    int sum;
    while(--k)
    {
        sum=0;
        while(n>0)
        {
            sum=sum+n%10;
            n=n/10;
            
        }
        n=sum;
    } 
    cout<<n;
     
}