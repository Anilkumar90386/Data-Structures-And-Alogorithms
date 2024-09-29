#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=10;
    if(n>0 && n<=9) cout<<n;
    for(int i=10;i<=n;i++)
    {
        int n=i;
        while(n!=0)
        {
            int ld=n%10;
            cnt++;
            if(cnt==n || ld==0) cout<<ld;
            n/=10;
        }
        
    }
  
}