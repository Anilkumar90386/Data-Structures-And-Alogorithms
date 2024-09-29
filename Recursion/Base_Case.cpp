#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void f(int i)
{ 
    if(i==3)
    {
        return;
    }
    cout<<i<<" ";
    f(i+1);
    cout<<endl;
    cout<<i<<" ";
     f(i+1);
}
int main()  
{
    f(0);
}