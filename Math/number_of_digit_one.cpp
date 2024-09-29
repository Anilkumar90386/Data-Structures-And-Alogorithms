#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=1;
    if(n<=9) cout<<cnt;
    for(int i=10;i<=n;i++)
    {
        int n=i;
        while(n!=0)
        {
            int ld=n%10;
            if(ld==1) cnt++;
            n/=10;
        }
    }
    cout<<cnt;
}