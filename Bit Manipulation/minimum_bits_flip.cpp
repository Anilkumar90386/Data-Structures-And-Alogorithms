#include<bits/stdc++.h>
using namespace std;
int main()
{
    int start,goal;
    cin>>start>>goal;
    int ans=start^goal;
    int cnt=0;
    for(int i=0;i<31;i++)
    {
        if(ans & (1<<i))
        {
            cnt++;
        }
    }
    cout<<cnt;
}