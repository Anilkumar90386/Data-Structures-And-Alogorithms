#include<bits/stdc++.h>
using namespace std;
string f(int n)
{
    if(n>2 && n%2==0) return "YES";
    return "NO";
}
int main()
{
    int w;
    cin>>w;
    cout<<f(w)<<endl;
}