#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cnt1=0,cnt2=0;
    while(t--)
    {
        int m,c;
        cin>>m>>c;
        if(m>c) cnt1++;
        else if(m<c) cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
    }
    if(cnt1>cnt2)
    {
        cout<<"Mishka";
    }
    else if(cnt1<cnt2){
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
}