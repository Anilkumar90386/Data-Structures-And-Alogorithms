#include <bits/stdc++.h>
using namespace std;
int f(int n)
{
    if(n<=2) return -1; 
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int wealth=0;
    for(int i=0;i<n;i++)
    {
        wealth+=a[i];
    }
    if(wealth>=20) return 0;

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout<<f(n)<<endl;
    }
}