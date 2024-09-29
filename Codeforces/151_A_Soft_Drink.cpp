#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int ml=k*l;
    int toast=ml/nl;
    int limes=c*d;
    int salt=p/np;
    int mini=INT_MAX;
    mini=min(mini,min(toast,min(salt,limes)));
    cout<<mini/n;

}