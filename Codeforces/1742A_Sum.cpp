#include<bits/stdc++.h>
using namespace std;
string f(int a,int b,int c)
{
    if(a+b==c) return "YES";
    else if(a==b+c) return "YES";
    else if(a+c==b) return "YES";
    else return "NO";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<f(a,b,c)<<endl;
    }
}