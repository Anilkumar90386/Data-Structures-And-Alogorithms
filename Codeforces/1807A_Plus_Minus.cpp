#include<bits/stdc++.h>
using namespace std;
void f(int a,int b,int c)
{
    if(a+b==c) cout<<"+"<<endl;
    else if(a-b==c) cout<<"-"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        f(a,b,c);
    }
}