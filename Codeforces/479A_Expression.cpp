#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int maxi=max({a+b+c,a*(b+c),(a+b)*c,a*b*c,a+(b*c)});
    cout<<maxi;    
}