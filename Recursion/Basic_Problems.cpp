#include<bits/stdc++.h>
using namespace std;
void name(int i)
{
    if(i==5)
    {
        return;
    }
    cout<<"Name"<<" ";
    name(i+1);
}
void print_1_to_n(int i,int n)
{
    if(i==n+1)
    {
        return;
    }
    cout<<i<<" ";
    print_1_to_n(i+1,n);
}
void print_n_to_1(int i)
{
    if(i==0)
    {
        return;
    }
    cout<<i<<" ";
    print_n_to_1(i-1);
}
void print_1_to_n_backtrack(int i,int n)
{
     if(i==n)
     {
        return;
     }
     print_1_to_n_backtrack(i+1,n);
     cout<<i<<" ";
}
int main()
{
    int n;
    cin>>n;
    print_1_to_n_backtrack(0,n);
}