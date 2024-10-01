#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        if(k==1)
        {
            cout<<n<<endl;
        }
        else{
            int cnt = 0;
            while (n != 0)
            {
                cnt += (n % k);
                n /= k;
            }
            cout <<cnt<<endl;
        }
        
    }
}