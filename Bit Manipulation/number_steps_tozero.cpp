#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=1;
    while(n!=1)
    {
        if(n%2==0){
            n=n/2;
            cnt++;
        }
        else{
            n--;
            cnt++;
        }
    }
    cout<<cnt;
}