#include<bits/stdc++.h>
using namespace std;
void f(int X)
{
    if(X>=1900) cout<<"Division 1"<<endl;
    else if(X<=1899 && X>=1600) cout<<"Division 2"<<endl;
    else if(X>=1400 && X<=1599) cout<<"Division 3"<<endl;
    else if(X<=1399) cout<<"Division 4"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int X;
        cin>>X;
        f(X);
    }
}