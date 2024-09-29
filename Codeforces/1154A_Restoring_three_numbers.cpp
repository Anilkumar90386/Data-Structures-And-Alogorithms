#include<bits/stdc++.h>
using namespace std;
void f(int x1,int x2,int x3,int x4)
{
   int b=abs(x4-x1);
   int c=abs(x3-x2);
   int a=abs(b-c);
    cout<<a<<" "<<b<<" "<<c;
}
int main()
{
    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    f(x1,x2,x3,x4);
}