#include<bits/stdc++.h>
using namespace std;
int f(int i)
{
    if(i<=1) return i;
    return f(i-1)+f(i-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<f(n);
}