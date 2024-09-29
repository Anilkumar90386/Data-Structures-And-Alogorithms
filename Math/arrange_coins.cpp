#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num=n%2!=0 ? (n/2) : (n/2)-1; 
    cout<<num;
}