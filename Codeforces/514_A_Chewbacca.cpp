#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num=1;
    int maxi=INT_MIN;
    if(n<9)
    {
        cout<<1;
        return 0;
    }
    if(n==9) {
        cout<<9;
        return 0;
    }
    while(n!=0)
    {
        int ld=n%10;
        maxi=max(maxi,ld);
        cout<<9-maxi;
        n/=10;
    }  
    return 0;
}