#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s=="X++" || s=="++X")
        {
            sum+=1;
        }
        else{
            sum-=1;
        }
    }
    cout<<sum;
}