#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = 0;
        if(n==1)
        {
            cout<<"ALICE"<<endl;
        }
        else if(n%3==0)
        {
            cout<<"BOB"<<endl;
        }
        else{
            cout<<"ALICE"<<endl;
        }
    }
}